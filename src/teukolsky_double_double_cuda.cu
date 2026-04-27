#include "teukolsky_double_double_cuda.cuh"

#include <algorithm>
#include <complex>
#include <iostream>
#include <numbers>

#include <thrust/copy.h>
#include <thrust/host_vector.h>

#include "cuda_wrapper.cuh"

namespace {

using DDReal = DoubleDouble::Real;
using DDComplex = DoubleDouble::Complex;

struct TeukolskyDDTerm {
  const DDComplex *coeff;
  const DDComplex *value;
};

std::vector<DDComplex> to_double_double_host(const Teukolsky::ComplexVector &in)
{
  std::vector<DDComplex> out(in.size());
  for(long long int i = 0; i < in.size(); ++i){
    out[i] = DDComplex(in[i].real(), in[i].imag());
  }
  return out;
}

std::vector<DDReal> to_double_double_host(const Teukolsky::Vector &in)
{
  std::vector<DDReal> out(in.size());
  for(long long int i = 0; i < in.size(); ++i){
    out[i] = DDReal(in[i]);
  }
  return out;
}

__global__
void drdr_complex_dd_kernel(DDComplex * __restrict__ out, const DDComplex * __restrict__ in, const int grid_size, const DDReal inv_h_sqr)
{
  const int i = blockIdx.x * blockDim.x + threadIdx.x;
  if(i >= 2 && i <= grid_size-3) {
    out[i] = inv_h_sqr * (((-0.083333333333333333333)*(in[-2+i])) + ((1.3333333333333333333)*(in[-1+i])) + ((-2.5000000000000000000)*(in[i])) + ((1.3333333333333333333)*(in[1+i])) + ((-0.083333333333333333333)*(in[2+i])));
  } else if(i == 0) {
    out[i] = inv_h_sqr * (((2.9166666666666666667)*(in[0])) + ((-8.6666666666666666667)*(in[1])) + ((9.5000000000000000000)*(in[2])) + ((-4.6666666666666666667)*(in[3])) + ((0.91666666666666666667)*(in[4])));
  } else if(i == 1) {
    out[i] = inv_h_sqr * (((0.91666666666666666667)*(in[0])) + ((-1.6666666666666666667)*(in[1])) + ((0.50000000000000000000)*(in[2])) + ((0.33333333333333333333)*(in[3])) + ((-0.083333333333333333333)*(in[4])));
  } else if(i == grid_size-2) {
    out[i] = inv_h_sqr * (((-0.083333333333333333333)*(in[-5+grid_size])) + ((0.33333333333333333333)*(in[-4+grid_size])) + ((0.50000000000000000000)*(in[-3+grid_size])) + ((-1.6666666666666666667)*(in[-2+grid_size])) + ((0.91666666666666666667)*(in[-1+grid_size])));
  } else if(i == grid_size-1) {
    out[i] = inv_h_sqr * (((0.91666666666666666667)*(in[-5+grid_size])) + ((-4.6666666666666666667)*(in[-4+grid_size])) + ((9.5000000000000000000)*(in[-3+grid_size])) + ((-8.6666666666666666667)*(in[-2+grid_size])) + ((2.9166666666666666667)*(in[-1+grid_size])));
  }
}

__global__
void dr_complex_dd_kernel(DDComplex * __restrict__ out, const DDComplex * __restrict__ in, const int grid_size, const DDReal inv_h)
{
  const int i = blockIdx.x * blockDim.x + threadIdx.x;
  if(i >= 2 && i <= grid_size-3) {
    out[i] = inv_h * (((0.083333333333333333333)*(in[-2+i])) + ((-0.66666666666666666667)*(in[-1+i])) + ((0.66666666666666666667)*(in[1+i])) + ((-0.083333333333333333333)*(in[2+i])));
  } else if(i == 0) {
    out[i] = inv_h * (((-2.0833333333333333333)*(in[0])) + ((4.0000000000000000000)*(in[1])) + ((-3.0000000000000000000)*(in[2])) + ((1.3333333333333333333)*(in[3])) + ((-0.25000000000000000000)*(in[4])));
  } else if(i == 1) {
    out[i] = inv_h * (((-0.25000000000000000000)*(in[0])) + ((-0.83333333333333333333)*(in[1])) + ((1.5000000000000000000)*(in[2])) + ((-0.50000000000000000000)*(in[3])) + ((0.083333333333333333333)*(in[4])));
  } else if(i == grid_size-2) {
    out[i] = inv_h * (((-0.083333333333333333333)*(in[-5+grid_size])) + ((0.50000000000000000000)*(in[-4+grid_size])) + ((-1.5000000000000000000)*(in[-3+grid_size])) + ((0.83333333333333333333)*(in[-2+grid_size])) + ((0.25000000000000000000)*(in[-1+grid_size])));
  } else if(i == grid_size-1) {
    out[i] = inv_h * (((0.25000000000000000000)*(in[-5+grid_size])) + ((-1.3333333333333333333)*(in[-4+grid_size])) + ((3.0000000000000000000)*(in[-3+grid_size])) + ((-4.0000000000000000000)*(in[-2+grid_size])) + ((2.0833333333333333333)*(in[-1+grid_size])));
  }
}

__global__
void assign_lhs_terms_dd_kernel(DDComplex * __restrict__ lhs, const TeukolskyDDTerm * __restrict__ terms, const int num_terms, const int grid_size)
{
  const int i = blockIdx.x * blockDim.x + threadIdx.x;
  if(i < grid_size){
    DDComplex sum(0.0, 0.0);
    for(int term = 0; term < num_terms; ++term){
      sum += terms[term].coeff[i] * terms[term].value[i];
    }
    lhs[i] = -sum;
  }
}

__global__
void copy_time_derivative_dd_kernel(DDComplex * __restrict__ out, const DDComplex * __restrict__ in, const int size)
{
  const int i = blockIdx.x * blockDim.x + threadIdx.x;
  if(i < size){
    out[i] = in[i];
  }
}

__global__
void ko_and_copy_complex_dd_kernel(DDComplex * __restrict__ out, const DDComplex * __restrict__ in1, const DDComplex * __restrict__ in2, const int grid_size, const DDReal epsilon)
{
  const int i = blockIdx.x * blockDim.x + threadIdx.x;
  if(i >= grid_size){
    return;
  }

  DDComplex ko(0.0, 0.0);
  if(i >= 2 && i <= grid_size-3) {
    ko = ((0.062500000000000000000)*(in2[-2+i])) + ((-0.25000000000000000000)*(in2[-1+i])) + ((0.37500000000000000000)*(in2[i])) + ((-0.25000000000000000000)*(in2[1+i])) + ((0.062500000000000000000)*(in2[2+i]));
  } else if(i <= 1) {
    ko = ((0.062500000000000000000)*(in2[0])) + ((-0.25000000000000000000)*(in2[1])) + ((0.37500000000000000000)*(in2[2])) + ((-0.25000000000000000000)*(in2[3])) + ((0.062500000000000000000)*(in2[4]));
  } else {
    ko = ((0.062500000000000000000)*(in2[-5+grid_size])) + ((-0.25000000000000000000)*(in2[-4+grid_size])) + ((0.37500000000000000000)*(in2[-3+grid_size])) + ((-0.25000000000000000000)*(in2[-2+grid_size])) + ((0.062500000000000000000)*(in2[-1+grid_size]));
  }
  out[i] = in1[i] - epsilon * ko;
}

__global__
void add_wavepacket_dd_kernel(DDComplex * __restrict__ out, const DDReal * __restrict__ spatial, const double front_factor, const double exp_factor, const double t, const double ti_ri, const double rast_min, const double rast_max, const long long int N)
{
  const int i = blockIdx.x * blockDim.x + threadIdx.x;
  if(i < N + 1){
    const double h = (rast_max - rast_min) / (N - 1);
    const double rast = rast_min + i * h - h / 2.0;
    const double u = t - rast - ti_ri;
    out[i] += DDComplex(DDReal(front_factor * exp(-u * u * exp_factor)) * spatial[i], DDReal(0.0));
  }
}

__global__
void add_dirac_delta_dd_kernel(DDComplex * __restrict__ out, const DDReal * __restrict__ in, const double time_factor, const long long int N)
{
  const int i = blockIdx.x * blockDim.x + threadIdx.x;
  if(i < N + 1){
    out[i] += DDComplex(DDReal(time_factor) * in[i], DDReal(0.0));
  }
}

__global__
void rk_stage_dd_kernel(DDComplex * __restrict__ out, const DDComplex * __restrict__ state, const DDComplex * __restrict__ k, const DDReal scale, const int size)
{
  const int i = blockIdx.x * blockDim.x + threadIdx.x;
  if(i < size){
    out[i] = state[i] + scale * k[i];
  }
}

__global__
void rk_final_dd_kernel(DDComplex * __restrict__ state, const DDComplex * __restrict__ k1, const DDComplex * __restrict__ k2, const DDComplex * __restrict__ k3, const DDComplex * __restrict__ k4, const DDReal dt_over_six, const int size)
{
  const int i = blockIdx.x * blockDim.x + threadIdx.x;
  if(i < size){
    state[i] += dt_over_six * (k1[i] + DDReal(2.0) * k2[i] + DDReal(2.0) * k3[i] + k4[i]);
  }
}

} // namespace

void copy_double_to_double_double(thrust::device_vector<DDComplex> &out, const Eigen::ArrayXcd &in)
{
  std::vector<DDComplex> host(in.size());
  for(long long int i = 0; i < in.size(); ++i){
    host[i] = DDComplex(in[i].real(), in[i].imag());
  }
  out.resize(host.size());
  thrust::copy(host.begin(), host.end(), out.begin());
}

void copy_double_double_to_double(Eigen::ArrayXcd &out, const thrust::device_vector<DDComplex> &in)
{
  thrust::host_vector<DDComplex> host = in;
  out.resize(host.size());
  for(size_t i = 0; i < host.size(); ++i){
    out[i] = std::complex<double>(static_cast<double>(host[i].real), static_cast<double>(host[i].imag));
  }
}

CudaTeukolskyDoubleDoubleSource::CudaTeukolskyDoubleDoubleSource(Param param_) : param(param_)
{
  using namespace std::numbers;

  const Scalar M = param.M;
  const Scalar a = param.a;
  const Scalar rast_min = param.rast_min;
  const Scalar rast_max = param.rast_max;
  const auto N = param.N;
  const auto l_max = param.l_max;
  const Scalar r_i = param.r_i;
  const Scalar sigma = param.sigma;

  grid_size = N + 1;
  lm_size = (l_max + 1) * (l_max + 1);

  const Scalar h = (rast_max - rast_min) / (N - 1);
  Teukolsky::Vector spatial_eigen(grid_size);

  if(param.type == PowerLaw){
    Teukolsky::prepare_r_beta(spatial_eigen, rast_min, rast_max, N, M, a, param.beta);
    const long long int cutoff_idx = static_cast<long long int>(0.5 + (r_i - rast_min) / h);
    spatial_eigen.head(cutoff_idx) = 0;
  }

  if(param.type == DiracDelta){
    Teukolsky::prepare_r_beta(spatial_eigen, rast_min, rast_max, N, M, a, -1);
    spatial_eigen = (1.0 / (2.0 * pi * sigma * sigma)) * exp(- (spatial_eigen - r_i).abs2() / (2.0 * sigma * sigma));
  }

  const std::vector<DDReal> host = to_double_double_host(spatial_eigen);
  spatial.resize(host.size());
  thrust::copy(host.begin(), host.end(), spatial.begin());
}

void CudaTeukolskyDoubleDoubleSource::operator()(const State &x, State &dxdt, const Scalar t)
{
  (void)x;
  const int threadsPerBlock = 512;
  const int numBlocks = (grid_size + threadsPerBlock - 1) / threadsPerBlock;
  const auto N = param.N;
  const auto lm = param.lm;

  if(param.type == PowerLaw){
    add_wavepacket_dd_kernel<<<dim3(numBlocks), dim3(threadsPerBlock)>>>(
      thrust::raw_pointer_cast(dxdt.data() + (lm_size + lm) * grid_size),
      thrust::raw_pointer_cast(spatial.data()),
      param.A,
      1.0 / (param.sigma * param.sigma * 2.0),
      t,
      param.t_i - param.r_i,
      param.rast_min,
      param.rast_max,
      N);
  }

  if(param.type == DiracDelta){
    const double time_factor = exp(- (t - param.t_i) * (t - param.t_i) / (param.sigma * param.sigma * 2.0));
    add_dirac_delta_dd_kernel<<<dim3(numBlocks), dim3(threadsPerBlock)>>>(
      thrust::raw_pointer_cast(dxdt.data() + (lm_size + lm) * grid_size),
      thrust::raw_pointer_cast(spatial.data()),
      time_factor,
      N);
  }
}

CudaTeukolskyScalarPDEDoubleDouble::CudaTeukolskyScalarPDEDoubleDouble(Param param_) : param(param_)
{
  const Scalar rast_min = param.rast_min;
  const Scalar rast_max = param.rast_max;
  const auto N = param.N;
  const Scalar M = param.M;
  const Scalar a = param.a;
  const auto s = param.s;
  const auto l_max = param.l_max;

  grid_size = N + 1;
  lm_size = (l_max + 1) * (l_max + 1);

  psi_lm_map = Teukolsky::make_coupling_info_map(Teukolsky::psi_lm_coupling_info_scalar, s, l_max);
  dr_psi_lm_map = Teukolsky::make_coupling_info_map(Teukolsky::dr_psi_lm_coupling_info_scalar, s, l_max);
  drdr_psi_lm_map = Teukolsky::make_coupling_info_map(Teukolsky::drdr_psi_lm_coupling_info_scalar, s, l_max);
  dt_psi_lm_map = Teukolsky::make_coupling_info_map(Teukolsky::dt_psi_lm_coupling_info_scalar, s, l_max);

  std::cout << "(CudaTeukolskyScalarPDEDoubleDouble) Preparing coupling coefficients" << std::endl;
  std::vector<Teukolsky::ComplexVector> coeffs_eigen;
  Teukolsky::prepare_coeffs_scalar(coeffs_eigen, rast_min, rast_max, N, M, a);

  coeffs.resize(coeffs_eigen.size());
  for(size_t i = 0; i < coeffs_eigen.size(); ++i){
    const auto host = to_double_double_host(coeffs_eigen[i]);
    coeffs[i].resize(host.size());
    thrust::copy(host.begin(), host.end(), coeffs[i].begin());
  }

  drdr_psi_lm.resize(lm_size * grid_size);
  dr_psi_lm.resize(lm_size * grid_size);
}

void CudaTeukolskyScalarPDEDoubleDouble::operator()(const State &x, State &dxdt, const Scalar t)
{
  const Scalar h = (param.rast_max - param.rast_min) / (param.N - 1);
  const int derivative_threads = 256;
  const int derivative_blocks = (grid_size + derivative_threads - 1) / derivative_threads;

  for(size_t lm = 0; lm < static_cast<size_t>(lm_size); ++lm){
    drdr_complex_dd_kernel<<<dim3(derivative_blocks), dim3(derivative_threads)>>>(
      thrust::raw_pointer_cast(drdr_psi_lm.data() + lm * grid_size),
      thrust::raw_pointer_cast(x.data() + lm * grid_size),
      grid_size,
      DDReal(1.0 / (h * h)));

    dr_complex_dd_kernel<<<dim3(derivative_blocks), dim3(derivative_threads)>>>(
      thrust::raw_pointer_cast(dr_psi_lm.data() + lm * grid_size),
      thrust::raw_pointer_cast(x.data() + lm * grid_size),
      grid_size,
      DDReal(1.0 / h));
  }

  const int rhs_threads = 512;
  const int rhs_blocks = (grid_size + rhs_threads - 1) / rhs_threads;

  for(size_t lm = 0; lm < static_cast<size_t>(lm_size); ++lm){
    std::vector<TeukolskyDDTerm> terms;
    for(auto [lm1, idx1] : psi_lm_map[lm]){
      terms.push_back({thrust::raw_pointer_cast(coeffs[idx1].data()),
		       thrust::raw_pointer_cast(x.data() + lm1 * grid_size)});
    }
    for(auto [lm1, idx1] : dt_psi_lm_map[lm]){
      terms.push_back({thrust::raw_pointer_cast(coeffs[idx1].data()),
		       thrust::raw_pointer_cast(x.data() + (lm_size + lm1) * grid_size)});
    }
    for(auto [lm1, idx1] : dr_psi_lm_map[lm]){
      terms.push_back({thrust::raw_pointer_cast(coeffs[idx1].data()),
		       thrust::raw_pointer_cast(dr_psi_lm.data() + lm1 * grid_size)});
    }
    for(auto [lm1, idx1] : drdr_psi_lm_map[lm]){
      terms.push_back({thrust::raw_pointer_cast(coeffs[idx1].data()),
		       thrust::raw_pointer_cast(drdr_psi_lm.data() + lm1 * grid_size)});
    }

    thrust::device_vector<TeukolskyDDTerm> device_terms(terms.begin(), terms.end());
    assign_lhs_terms_dd_kernel<<<dim3(rhs_blocks), dim3(rhs_threads)>>>(
      thrust::raw_pointer_cast(dxdt.data() + (lm_size + lm) * grid_size),
      thrust::raw_pointer_cast(device_terms.data()),
      static_cast<int>(terms.size()),
      grid_size);
    cudaDeviceSynchronize();
  }

  const long long int dt_grid_begin = lm_size * grid_size;
  if(param.ko_epsilon == 0){
    const int copy_threads = 512;
    const int copy_blocks = (dt_grid_begin + copy_threads - 1) / copy_threads;
    copy_time_derivative_dd_kernel<<<dim3(copy_blocks), dim3(copy_threads)>>>(
      thrust::raw_pointer_cast(dxdt.data()),
      thrust::raw_pointer_cast(x.data() + dt_grid_begin),
      dt_grid_begin);
  } else {
    for(size_t lm = 0; lm < static_cast<size_t>(lm_size); ++lm){
      ko_and_copy_complex_dd_kernel<<<dim3(derivative_blocks), dim3(derivative_threads)>>>(
	thrust::raw_pointer_cast(dxdt.data() + lm * grid_size),
	thrust::raw_pointer_cast(x.data() + dt_grid_begin + lm * grid_size),
	thrust::raw_pointer_cast(x.data() + lm * grid_size),
	grid_size,
	DDReal(param.ko_epsilon));
    }
  }

  if(add_source){
    add_source(x, dxdt, t);
  }
}

void CudaTeukolskyScalarPDEDoubleDouble::rk4_step(State &state, const Scalar t, const Scalar dt)
{
  State k1(state.size());
  State k2(state.size());
  State k3(state.size());
  State k4(state.size());
  State tmp(state.size());

  const int threads = 512;
  const int blocks = (state.size() + threads - 1) / threads;

  (*this)(state, k1, t);
  rk_stage_dd_kernel<<<dim3(blocks), dim3(threads)>>>(thrust::raw_pointer_cast(tmp.data()), thrust::raw_pointer_cast(state.data()), thrust::raw_pointer_cast(k1.data()), DDReal(0.5 * dt), state.size());

  (*this)(tmp, k2, t + 0.5 * dt);
  rk_stage_dd_kernel<<<dim3(blocks), dim3(threads)>>>(thrust::raw_pointer_cast(tmp.data()), thrust::raw_pointer_cast(state.data()), thrust::raw_pointer_cast(k2.data()), DDReal(0.5 * dt), state.size());

  (*this)(tmp, k3, t + 0.5 * dt);
  rk_stage_dd_kernel<<<dim3(blocks), dim3(threads)>>>(thrust::raw_pointer_cast(tmp.data()), thrust::raw_pointer_cast(state.data()), thrust::raw_pointer_cast(k3.data()), DDReal(dt), state.size());

  (*this)(tmp, k4, t + dt);
  rk_final_dd_kernel<<<dim3(blocks), dim3(threads)>>>(thrust::raw_pointer_cast(state.data()), thrust::raw_pointer_cast(k1.data()), thrust::raw_pointer_cast(k2.data()), thrust::raw_pointer_cast(k3.data()), thrust::raw_pointer_cast(k4.data()), DDReal(dt / 6.0), state.size());
}

void CudaTeukolskyScalarPDEDoubleDouble::integrate_fixed_rk4(State &state, const Scalar t_start, const Scalar t_end, const Scalar dt)
{
  Scalar t = t_start;
  while(t < t_end){
    const Scalar step = std::min(dt, t_end - t);
    rk4_step(state, t, step);
    t += step;
  }
  cudaDeviceSynchronize();
}
