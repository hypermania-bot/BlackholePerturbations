/*! 
  \file regge_wheeler_precise.hpp
  \author Siyang Ling
  \brief Header for Regge Wheeler equations that runs on the CPU.

*/
#ifndef REGGE_WHEELER_PRECISE_HPP
#define REGGE_WHEELER_PRECISE_HPP

#include <Eigen/Dense>
#include <boost/math/special_functions/lambert_w.hpp>
#include <boost/multiprecision/cpp_bin_float.hpp>
#include <boost/multiprecision/float128.hpp>
// #include <boost/multiprecision/gmp.hpp>
#include <boost/multiprecision/eigen.hpp>
#include "discretization.hpp"


struct QuasiNormalModePDEPreciseParam {
  typedef boost::multiprecision::float128 Scalar;
  long long int s;
  long long int l;
  Scalar r0;
  
  Scalar r_min;
  Scalar r_max;
  long long int N;

  Scalar t_start;
  Scalar t_end;
  Scalar t_interval;
  Scalar delta_t;
};

/*! 
  \brief Regge-Wheeler equation with an optional source Q.
*/
struct QuasiNormalModePDEPrecise {
  typedef QuasiNormalModePDEPreciseParam Param;
  //typedef boost::multiprecision::cpp_bin_float_50 Scalar;
  typedef boost::multiprecision::float128 Scalar;
  typedef Eigen::Array<Scalar, -1, 1> Vector;
  typedef Vector State;
  
  Param param;
  Vector V;
  std::function<Vector(const Scalar)> Q;
  
  QuasiNormalModePDEPrecise(Param param_) : param(param_) {
    using boost::multiprecision::cpp_bin_float_100;
    using boost::math::lambert_w0;
    
    const Scalar r_min = param.r_min;
    const Scalar r_max = param.r_max;
    const auto N = param.N;
    const Scalar r0 = param.r0;
    const auto s = param.s;
    const auto l = param.l;
    
    // const Scalar h = (r_max - r_min) / (N - 1);

    /*
    V.resize(N+1);
    for(int i = 0; i < V.size(); ++i) {
      const Scalar r_ast = r_min + i * h - h / Scalar(2.0); //i_to_r_ast(r_min, r_max, N, i);
      const Scalar exponent = r_ast / r0 - Scalar(1.0);
      const Scalar exponential = exp(exponent);
      const Scalar lambert_val = lambert_w0(exponential / r0);
      //const double lambert_val_double = lambert_val.convert_to<double>();
      const Scalar r = r0 * (Scalar(1.0) + lambert_val);
      
      const Scalar V_r = (1 - r0 / r) * (l*(l+1) / (r*r) + r0 * (1 - s*s) / (r*r*r));
      V[i] = V_r;
    }
    */
    V.resize(N+1);
    Vector r = compute_r_vector(r_min, r_max, N, r0);
    V = (1 - r0 / r) * (l*(l+1) / (r*r) + r0 * (1 - s*s) / (r*r*r));
    
    Q = [N](const Scalar t)->Vector{ return Vector::Zero(N+1); };
  }
  

  // Second order derivative has O(h^4) error
  // Absorbing boundary conditions are used
  void free_propagation_new(const Vector &x, Vector &dxdt) const {
    using namespace Eigen;
    const auto N = param.N;
    const Scalar r_min = param.r_min;
    const Scalar r_max = param.r_max;
    const Scalar h = (r_max - r_min) / (N - 1); // get_h(param.r_min, param.r_max, N);
    
    const long long int grid_size = N + 1;
    const long long int grid_begin = 0;
    const long long int dt_grid_begin = grid_size;
    
    dxdt(dt_grid_begin+0)
      = (-25 * x(dt_grid_begin+0) + 48 * x(dt_grid_begin+1) - 36 * x(dt_grid_begin+2) + 16 * x(dt_grid_begin+3) - 3 * x(dt_grid_begin+4) ) / (12*h);
    dxdt(dt_grid_begin+1)
      = (11 * x(grid_begin+0) - 20 * x(grid_begin+1) + 6 * x(grid_begin+2) + 4 * x(grid_begin+3) - x(grid_begin+4) ) / (12*h*h);
    dxdt(seqN(dt_grid_begin+2,grid_size-4))
      = (-1 * x(seqN(grid_begin,grid_size-4)) + 16 * x(seqN(grid_begin+1,grid_size-4)) - 30 * x(seqN(grid_begin+2,grid_size-4)) + 16 * x(seqN(grid_begin+3,grid_size-4)) - 1 * x(seqN(grid_begin+4,grid_size-4)) ) / (12*h*h);
    dxdt(dt_grid_begin+grid_size-2)
      = (-1 * x(grid_begin+grid_size-1-4) + 4 * x(grid_begin+grid_size-1-3) + 6 * x(grid_begin+grid_size-1-2) - 20 * x(grid_begin+grid_size-1-1) + 11 * x(grid_begin+grid_size-1-0)  ) / (12*h*h);
    dxdt(dt_grid_begin+grid_size-1)
      = (-3 * x(dt_grid_begin+grid_size-1-4) + 16 * x(dt_grid_begin+grid_size-1-3) - 36 * x(dt_grid_begin+grid_size-1-2) + 48 * x(dt_grid_begin+grid_size-1-1) - 25 * x(dt_grid_begin+grid_size-1-0)  ) / (12*h);
  }

  
  /*!
    \brief The function called by odeint library.
    \param[in] x The current state of the system.
    \param[out] dxdt The time derivative, dxdt of the system.
    \param t The current time parameter.
  */
  void operator()(const State &x, State &dxdt, const Scalar t) {
    using namespace Eigen;
    const auto N = param.N;
    const long long int grid_size = N + 1;
    
    dxdt.head(grid_size) = x.tail(grid_size);
    free_propagation_new(x, dxdt);
    dxdt.tail(grid_size) += -x.head(grid_size) * V + Q(t);
  }
  
  static Vector compute_r_ast_vector(const Scalar r_min, const Scalar r_max, const long long int N) {
    Scalar h = (r_max - r_min) / (N - 1);
    Vector r_ast(N + 1);
    for(long long int i = 0; i < N + 1; ++i) {
      r_ast[i] = r_min + i * h - h / Scalar(2);
    }
    return r_ast;
  }
  
  static Vector compute_r_vector(const Scalar r_min, const Scalar r_max, const long long int N, const Scalar r0) {
    using boost::multiprecision::cpp_bin_float_100;
    using boost::math::lambert_w0;
    typedef boost::multiprecision::cpp_bin_float_100 HighPrecisionScalar;
    HighPrecisionScalar r_min_hp = static_cast<HighPrecisionScalar>(r_min);
    HighPrecisionScalar r_max_hp = static_cast<HighPrecisionScalar>(r_max);
    HighPrecisionScalar r0_hp = static_cast<HighPrecisionScalar>(r0);
    HighPrecisionScalar h_hp = (r_max_hp - r_min_hp) / (N - 1);
    Vector r(N + 1);
    for(long long int i = 0; i < N + 1; ++i) {
      const HighPrecisionScalar r_ast_hp = r_min_hp + i * h_hp - h_hp / HighPrecisionScalar(2);
      const HighPrecisionScalar exponent = r_ast_hp / r0_hp - HighPrecisionScalar(1);
      const HighPrecisionScalar exponential = exp(exponent);
      const HighPrecisionScalar lambert_val = lambert_w0(exponential / r0_hp);
      const HighPrecisionScalar r_hp = r0_hp * (HighPrecisionScalar(1) + lambert_val);
      r[i] = r_hp.convert_to<Scalar>();
    }
    return r;
  }

};


#endif
