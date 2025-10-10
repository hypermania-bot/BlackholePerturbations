#include "teukolsky_scalar.hpp"
#include <map>
#include <iostream>
#include <thread>
#include <boost/lockfree/queue.hpp>

#include "teukolsky.hpp"


TeukolskyScalarPDE::TeukolskyScalarPDE(Param param_) : param(param_) {
  using boost::multiprecision::cpp_bin_float_100;
  using namespace Eigen;
  using namespace Teukolsky;
    
  const Scalar rast_min = param.rast_min;
  const Scalar rast_max = param.rast_max;
  const auto N = param.N;
  const Scalar M = param.M;
  const Scalar a = param.a;
  const auto s = param.s;
  const auto l_max = param.l_max;

  grid_size = N + 1;
  lm_size = (l_max + 1) * (l_max + 1);
    
  const Scalar h = (rast_max - rast_min) / (N - 1);

  psi_lm_map = make_coupling_info_map(psi_lm_coupling_info_scalar, 0, l_max);
  dr_psi_lm_map = make_coupling_info_map(dr_psi_lm_coupling_info_scalar, 0, l_max);
  drdr_psi_lm_map = make_coupling_info_map(drdr_psi_lm_coupling_info_scalar, 0, l_max);
  dt_psi_lm_map = make_coupling_info_map(dt_psi_lm_coupling_info_scalar, 0, l_max);

  auto a_hp = static_cast<HighPrecisionScalar>(a);
  auto M_hp = static_cast<HighPrecisionScalar>(M);
  auto rast_min_hp = static_cast<HighPrecisionScalar>(rast_min);
  auto rast_max_hp = static_cast<HighPrecisionScalar>(rast_max);

  auto t1 = std::chrono::system_clock::now();
  
  auto r_hp = compute_hp_r_vector(rast_min_hp, rast_max_hp, N, M_hp, a_hp);
  
  auto t2 = std::chrono::system_clock::now();
  
  coeffs = compute_coeffs_scalar(a_hp, M_hp, r_hp);

  auto t3 = std::chrono::system_clock::now();
  std::chrono::duration<double> time_diff_1 = t2 - t1;
  std::chrono::duration<double> time_diff_2 = t3 - t2;
  std::cout << std::setw(9) << "(TeukolskyScalarPDE) time spent computing radial coordinates = " << time_diff_1.count() << " s" << '\n';
  std::cout << std::setw(9) << "(TeukolskyScalarPDE) time spent computing coupling coefficients = " << time_diff_2.count() << " s" << '\n';
  
  Q = [N](const Scalar t)->Vector{ return Vector::Zero(N+1); };
}

  

void TeukolskyScalarPDE::operator()(const State &x, State &dxdt, const Scalar t) {
  using namespace Eigen;
  const auto N = param.N;
  const long long int dt_grid_begin = lm_size * grid_size;

  dxdt(seqN(0, dt_grid_begin)) = x(seqN(dt_grid_begin, dt_grid_begin));
  
  ComplexVector dr_psi_lm(lm_size * grid_size);
  ComplexVector drdr_psi_lm(lm_size * grid_size);

  compute_derivatives(x, dr_psi_lm, drdr_psi_lm);

  // For each spherical harmonic, set the second order time derivative
  for(int lm = 0; lm < lm_size; ++lm){
    auto dtdt_psi_lm = dxdt(seqN(dt_grid_begin + lm * grid_size, grid_size));
    dtdt_psi_lm = 0;
    for(auto [lm1, idx1] : psi_lm_map[lm]){
      dtdt_psi_lm -= coeffs[idx1] * x(seqN(lm1 * grid_size, grid_size));
    }
    for(auto [lm1, idx1] : dt_psi_lm_map[lm]){
      dtdt_psi_lm -= coeffs[idx1] * x(seqN(dt_grid_begin + lm1 * grid_size, grid_size));
    }
    for(auto [lm1, idx1] : dr_psi_lm_map[lm]){
      dtdt_psi_lm -= coeffs[idx1] * dr_psi_lm(seqN(lm1 * grid_size, grid_size));
    }
    for(auto [lm1, idx1] : drdr_psi_lm_map[lm]){
      dtdt_psi_lm -= coeffs[idx1] * drdr_psi_lm(seqN(lm1 * grid_size, grid_size));
    }
  }
}


void TeukolskyScalarPDE::compute_derivatives(const TeukolskyScalarPDE::State &x, TeukolskyScalarPDE::ComplexVector &dr_psi_lm, TeukolskyScalarPDE::ComplexVector &drdr_psi_lm) const {
  using namespace Eigen;
  const auto N = param.N;
  const Scalar r_min = param.rast_min;
  const Scalar r_max = param.rast_max;
  const Scalar h = (r_max - r_min) / (N - 1);
  for(long long int lm = 0; lm < lm_size; ++lm){
    dr_psi_lm(lm*grid_size+0) = ((-2.0833333333333333333)*((pow(h,-1))*(x((lm)*grid_size+(0)))))+(((4.0000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+(1)))))+(((-3.0000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+(2)))))+(((1.3333333333333333333)*((pow(h,-1))*(x((lm)*grid_size+(3)))))+((-0.25000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+(4))))))));
    dr_psi_lm(lm*grid_size+1) = ((-0.25000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+(0)))))+(((-0.83333333333333333333)*((pow(h,-1))*(x((lm)*grid_size+(1)))))+(((1.5000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+(2)))))+(((-0.50000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+(3)))))+((0.083333333333333333333)*((pow(h,-1))*(x((lm)*grid_size+(4))))))));
    dr_psi_lm(seqN(lm*grid_size+2,grid_size-4)) = ((0.083333333333333333333)*((pow(h,-1))*(x(seqN((lm)*grid_size+(0),((-4)+(grid_size)))))))+(((-0.66666666666666666667)*((pow(h,-1))*(x(seqN((lm)*grid_size+(1),((-4)+(grid_size)))))))+(((0.66666666666666666667)*((pow(h,-1))*(x(seqN((lm)*grid_size+(3),((-4)+(grid_size)))))))+((-0.083333333333333333333)*((pow(h,-1))*(x(seqN((lm)*grid_size+(4),((-4)+(grid_size)))))))));
    dr_psi_lm(lm*grid_size+grid_size-2) = ((-0.083333333333333333333)*((pow(h,-1))*(x((lm)*grid_size+((-5)+(grid_size))))))+(((0.50000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+((-4)+(grid_size))))))+(((-1.5000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+((-3)+(grid_size))))))+(((0.83333333333333333333)*((pow(h,-1))*(x((lm)*grid_size+((-2)+(grid_size))))))+((0.25000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+((-1)+(grid_size)))))))));
    dr_psi_lm(lm*grid_size+grid_size-1) = ((0.25000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+((-5)+(grid_size))))))+(((-1.3333333333333333333)*((pow(h,-1))*(x((lm)*grid_size+((-4)+(grid_size))))))+(((3.0000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+((-3)+(grid_size))))))+(((-4.0000000000000000000)*((pow(h,-1))*(x((lm)*grid_size+((-2)+(grid_size))))))+((2.0833333333333333333)*((pow(h,-1))*(x((lm)*grid_size+((-1)+(grid_size)))))))));
    drdr_psi_lm(lm*grid_size+0) = ((2.9166666666666666667)*((pow(h,-2))*(x((lm)*grid_size+(0)))))+(((-8.6666666666666666667)*((pow(h,-2))*(x((lm)*grid_size+(1)))))+(((9.5000000000000000000)*((pow(h,-2))*(x((lm)*grid_size+(2)))))+(((-4.6666666666666666667)*((pow(h,-2))*(x((lm)*grid_size+(3)))))+((0.91666666666666666667)*((pow(h,-2))*(x((lm)*grid_size+(4))))))));
    drdr_psi_lm(lm*grid_size+1) = ((0.91666666666666666667)*((pow(h,-2))*(x((lm)*grid_size+(0)))))+(((-1.6666666666666666667)*((pow(h,-2))*(x((lm)*grid_size+(1)))))+(((0.50000000000000000000)*((pow(h,-2))*(x((lm)*grid_size+(2)))))+(((0.33333333333333333333)*((pow(h,-2))*(x((lm)*grid_size+(3)))))+((-0.083333333333333333333)*((pow(h,-2))*(x((lm)*grid_size+(4))))))));
    drdr_psi_lm(seqN(lm*grid_size+2,grid_size-4)) = ((-0.083333333333333333333)*((pow(h,-2))*(x(seqN((lm)*grid_size+(0),((-4)+(grid_size)))))))+(((1.3333333333333333333)*((pow(h,-2))*(x(seqN((lm)*grid_size+(1),((-4)+(grid_size)))))))+(((-2.5000000000000000000)*((pow(h,-2))*(x(seqN((lm)*grid_size+(2),((-4)+(grid_size)))))))+(((1.3333333333333333333)*((pow(h,-2))*(x(seqN((lm)*grid_size+(3),((-4)+(grid_size)))))))+((-0.083333333333333333333)*((pow(h,-2))*(x(seqN((lm)*grid_size+(4),((-4)+(grid_size))))))))));
    drdr_psi_lm(lm*grid_size+grid_size-2) = ((-0.083333333333333333333)*((pow(h,-2))*(x((lm)*grid_size+((-5)+(grid_size))))))+(((0.33333333333333333333)*((pow(h,-2))*(x((lm)*grid_size+((-4)+(grid_size))))))+(((0.50000000000000000000)*((pow(h,-2))*(x((lm)*grid_size+((-3)+(grid_size))))))+(((-1.6666666666666666667)*((pow(h,-2))*(x((lm)*grid_size+((-2)+(grid_size))))))+((0.91666666666666666667)*((pow(h,-2))*(x((lm)*grid_size+((-1)+(grid_size)))))))));
    drdr_psi_lm(lm*grid_size+grid_size-1) = ((0.91666666666666666667)*((pow(h,-2))*(x((lm)*grid_size+((-5)+(grid_size))))))+(((-4.6666666666666666667)*((pow(h,-2))*(x((lm)*grid_size+((-4)+(grid_size))))))+(((9.5000000000000000000)*((pow(h,-2))*(x((lm)*grid_size+((-3)+(grid_size))))))+(((-8.6666666666666666667)*((pow(h,-2))*(x((lm)*grid_size+((-2)+(grid_size))))))+((2.9166666666666666667)*((pow(h,-2))*(x((lm)*grid_size+((-1)+(grid_size)))))))));
    
  }
}

std::pair<long long int, long long int> TeukolskyScalarPDE::idx_to_lm(const long long int idx) {
  const long long int l = static_cast<long long int>(floor(sqrt(idx)));
  const long long int m = idx - l * l - l;
  return std::make_pair(l, m);
}

