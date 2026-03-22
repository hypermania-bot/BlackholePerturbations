#include "teukolsky_source_cuda.cuh"

// #include "cuda_wrapper.cuh"
// #include "pde_cuda_kernel.cuh"
// #include "sph.hpp"

#include <cuda_runtime.h>
#include <thrust/complex.h>
#include "cuda_wrapper.cuh"
#include "io.hpp"




__global__
void add_wavepacket_kernel(thrust::complex<double> * __restrict__ out, const double * __restrict__ spatial, const double front_factor, const double exp_factor, const double t, const double ti_ri, const double rast_min, const double rast_max, const long long int N)
{
  int i = blockIdx.x * blockDim.x + threadIdx.x;
  double h = (rast_max - rast_min) / (N - 1);
  double rast = rast_min + i * h - h / 2.0;

  if(i < N + 1){
    // Note that r_beta is already truncated
    out[i] += front_factor * exp(- (t - rast - ti_ri) * (t - rast - ti_ri) * exp_factor) * spatial[i];
  }
}


// (1 / (2 pi sigma^2)) * exp(-((t-t_i)^2 + (r-r_i)^2)/(2 sigma^2))
// = exp(-(t-t_i)^2/(2 sigma^2)) *  (1 / (2 pi sigma^2)) * exp(-(r-r_i)^2/(2 sigma^2))
// = time_factor * in
__global__
void add_dirac_delta_kernel(thrust::complex<double> * __restrict__ out, const double * __restrict__ in, const double time_factor, const long long int N)
{
  int i = blockIdx.x * blockDim.x + threadIdx.x;

  if(i < N + 1){
    out[i] += time_factor * in[i];
  }
}


CudaTeukolskySource::CudaTeukolskySource(Param param_) : param(param_) {
  using namespace Eigen;
  //using namespace Teukolsky;
  using namespace std::numbers;
  
  const Scalar M = param.M;
  const Scalar a = param.a;
  const Scalar rast_min = param.rast_min;
  const Scalar rast_max = param.rast_max;
  const auto N = param.N;
  const auto l_max = param.l_max;

  const auto beta = param.beta;
  const auto lm = param.lm;
  const Scalar t_i = param.t_i;
  const Scalar r_i = param.r_i;
  const Scalar sigma = param.sigma;
  const Scalar A = param.A;
  
  grid_size = N + 1;
  lm_size = (l_max + 1) * (l_max + 1);
    
  const Scalar h = (rast_max - rast_min) / (N - 1);

  // Remember that Eigen vectors instantitated in .cu and .cpp translation units are incompatible
  // The workaround to use prepare_coeffs_scalar() (in a .cpp translation unit)
  Teukolsky::Vector spatial_eigen(grid_size);

  if(param.type == PowerLaw){
    Teukolsky::prepare_r_beta(spatial_eigen, rast_min, rast_max, N, M, a, beta);

    // Cutoff everything before r_i
    const long long int cutoff_idx = (long long int)(0.5 + (r_i - rast_min) / h);
    spatial_eigen.head(cutoff_idx) = 0;
  }
  
  if(param.type == DiracDelta){
    Teukolsky::prepare_r_beta(spatial_eigen, rast_min, rast_max, N, M, a, -1);
    spatial_eigen = (1.0 / (2.0 * pi * sigma * sigma)) * exp(- (spatial_eigen - r_i).abs2() / (2.0 * sigma * sigma));
  }
  
  // std::cout << "spatial[23000], spatial[23666] = " << spatial_eigen[23000] << ", " << spatial_eigen[23666] << std::endl;
  spatial.resize(spatial_eigen.size());
  copy_vector(spatial, spatial_eigen);
}


void CudaTeukolskySource::operator()(const State &x, State &dxdt, const Scalar t)
{
  const double front_factor = param.A;
  const double exp_factor = 1.0 / (param.sigma * param.sigma * 2.0);
  const double ti_ri = param.t_i - param.r_i;
  const double rast_min = param.rast_min;
  const double rast_max = param.rast_max;
  const double sigma = param.sigma;
  const double ti = param.t_i;
  const auto N = param.N;
  const auto lm = param.lm;
  
  const int threadsPerBlock = 512;
  const int numBlocks = (grid_size + threadsPerBlock - 1) / threadsPerBlock;

  if(param.type == PowerLaw){
    add_wavepacket_kernel<<<dim3(numBlocks), dim3(threadsPerBlock)>>>(thrust::raw_pointer_cast(dxdt.data() + (lm_size + lm) * grid_size),
								      thrust::raw_pointer_cast(spatial.data()),
								      front_factor,
								      exp_factor,
								      t,
								      ti_ri,
								      rast_min,
								      rast_max,
								      N);
  }
  
  if(param.type == DiracDelta){
    const double time_factor = exp(- (t - ti) * (t - ti) * exp_factor);
    // std::cout << "t = " << t << ", time_factor = " << time_factor << std::endl;
    add_dirac_delta_kernel<<<dim3(numBlocks), dim3(threadsPerBlock)>>>(thrust::raw_pointer_cast(dxdt.data() + (lm_size + lm) * grid_size),
								       thrust::raw_pointer_cast(spatial.data()),
								       time_factor,
								       N);
  }
}
