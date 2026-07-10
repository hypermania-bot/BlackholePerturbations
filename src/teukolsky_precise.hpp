/*! 
  \file teukolsky_precise.hpp
  \author Siyang Ling
  \brief Header for the Teukolsky equation (Schwarzschild, a=0) using high precision CPU arithmetic.

  The Teukolsky equation in Schwarzschild, converted to tortoise coordinate r_*:

    ∂_t ψ   =  Π  −  ε · D₄(ψ)
    ∂_t Π   =  −A(r)·Π  −  V(r)·ψ  +  ∂²_{r_*} ψ  −  C(r)·∂_{r_*} ψ  +  Q(t)

  where
    A(r) = 2s(r − 3M)/r²
    C(r) = 2s(r − M)/r²
    V(r) = (r−2M)/r⁴ · [r(ℓ−s)(ℓ+s+1) + 2M(1+s)]

  D₄ is the fourth-derivative Kreiss-Oliger dissipation operator.
*/
#ifndef TEUKOLSKY_PRECISE_HPP
#define TEUKOLSKY_PRECISE_HPP

#include <Eigen/Dense>
#include <boost/math/special_functions/lambert_w.hpp>
#include <boost/multiprecision/cpp_bin_float.hpp>
#include <boost/multiprecision/float128.hpp>
#include <boost/multiprecision/eigen.hpp>
#include "discretization.hpp"


struct TeukolskyPDEPreciseParam {
  typedef boost::multiprecision::float128 Scalar;
  long long int s;
  long long int l;
  Scalar M;
  
  Scalar r_min;
  Scalar r_max;
  long long int N;

  Scalar ko_epsilon;

  Scalar t_start;
  Scalar t_end;
  Scalar t_interval;
  Scalar delta_t;
};


struct TeukolskyPDEPrecise {
  typedef TeukolskyPDEPreciseParam Param;
  typedef boost::multiprecision::float128 Scalar;
  typedef Eigen::Array<Scalar, -1, 1> Vector;
  typedef Vector State;
  
  Param param;
  Vector V;
  Vector A;
  Vector C;

  std::function<Vector(const Scalar)> Q;
  
  TeukolskyPDEPrecise(Param param_) : param(param_) {
    using boost::multiprecision::cpp_bin_float_100;
    using boost::math::lambert_w0;
    
    const Scalar r_min = param.r_min;
    const Scalar r_max = param.r_max;
    const auto N = param.N;
    const Scalar M = param.M;
    const auto s = param.s;
    const auto l = param.l;

    const Scalar r0 = Scalar(2) * M;

    V.resize(N+1);
    A.resize(N+1);
    C.resize(N+1);

    Vector r = compute_r_vector(r_min, r_max, N, r0);

    const Scalar twoM = Scalar(2) * M;
    const Vector rm2M = r - twoM;
    const Vector inv_r = Scalar(1) / r;
    const Vector inv_r2 = inv_r * inv_r;
    const Vector inv_r4 = inv_r2 * inv_r2;

    V = rm2M * inv_r4 * (r * Scalar((l - s) * (l + s + 1)) + twoM * Scalar(1 + s));
    A = Scalar(2 * s) * (r - Scalar(3) * M) * inv_r2;
    C = Scalar(2 * s) * (r - M) * inv_r2;
    
    Q = [N](const Scalar t)->Vector{ return Vector::Zero(N+1); };
  }


  void operator()(const State &x, State &dxdt, const Scalar t) {
    using namespace Eigen;
    const auto N = param.N;
    const long long int grid_size = N + 1;

    const auto psi = x.head(grid_size);
    const auto Pi = x.tail(grid_size);

    dxdt.head(grid_size) = Pi;

    apply_ko_dissipation(x, dxdt);

    const Scalar r_min = param.r_min;
    const Scalar r_max = param.r_max;
    const Scalar h = (r_max - r_min) / (N - 1);

    Vector d1(grid_size), d2(grid_size);
    compute_derivatives(psi, h, d2, d1);

    dxdt.tail(grid_size) = d2 - C * d1 - A * Pi - V * psi + Q(t);
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

  static Vector compute_r_ast_vector(const Scalar r_min, const Scalar r_max, const long long int N) {
    Scalar h = (r_max - r_min) / (N - 1);
    Vector r_ast(N + 1);
    for(long long int i = 0; i < N + 1; ++i) {
      r_ast[i] = r_min + i * h - h / Scalar(2);
    }
    return r_ast;
  }


private:

  void compute_derivatives(const Eigen::Ref<const Vector> &psi,
                           const Scalar h,
                           Eigen::Ref<Vector> d2,
                           Eigen::Ref<Vector> d1) const {
    using namespace Eigen;
    const auto N = param.N;
    const long long int grid_size = N + 1;
    const Scalar inv_h = Scalar(1) / h;
    const Scalar inv_h_sqr = inv_h * inv_h;
    const Scalar o12 = Scalar(1) / Scalar(12);

    for(long long int i = 2; i <= grid_size - 3; ++i) {
      d2(i) = (-psi(i-2) + Scalar(16)*psi(i-1) - Scalar(30)*psi(i) + Scalar(16)*psi(i+1) - psi(i+2)) * o12 * inv_h_sqr;
      d1(i) = ( psi(i-2) - Scalar(8)*psi(i-1) + Scalar(8)*psi(i+1) - psi(i+2)) * o12 * inv_h;
    }

    {
      const long long int i = 0;
      d2(i) = ( Scalar(35)*psi(0) - Scalar(104)*psi(1) + Scalar(114)*psi(2) - Scalar(56)*psi(3) + Scalar(11)*psi(4)) * o12 * inv_h_sqr;
      d1(i) = (-Scalar(25)*psi(0) + Scalar(48)*psi(1) - Scalar(36)*psi(2) + Scalar(16)*psi(3) - Scalar(3)*psi(4)) * o12 * inv_h;
    }

    {
      const long long int i = 1;
      d2(i) = ( Scalar(11)*psi(0) - Scalar(20)*psi(1) + Scalar(6)*psi(2) + Scalar(4)*psi(3) - psi(4)) * o12 * inv_h_sqr;
      d1(i) = (-Scalar(3)*psi(0) - Scalar(10)*psi(1) + Scalar(18)*psi(2) - Scalar(6)*psi(3) + psi(4)) * o12 * inv_h;
    }

    {
      const long long int i = grid_size - 2;
      d2(i) = (-psi(grid_size-5) + Scalar(4)*psi(grid_size-4) + Scalar(6)*psi(grid_size-3) - Scalar(20)*psi(grid_size-2) + Scalar(11)*psi(grid_size-1)) * o12 * inv_h_sqr;
      d1(i) = (-psi(grid_size-5) + Scalar(6)*psi(grid_size-4) - Scalar(18)*psi(grid_size-3) + Scalar(10)*psi(grid_size-2) + Scalar(3)*psi(grid_size-1)) * o12 * inv_h;
    }

    {
      const long long int i = grid_size - 1;
      d2(i) = ( Scalar(11)*psi(grid_size-5) - Scalar(56)*psi(grid_size-4) + Scalar(114)*psi(grid_size-3) - Scalar(104)*psi(grid_size-2) + Scalar(35)*psi(grid_size-1)) * o12 * inv_h_sqr;
      d1(i) = ( Scalar(3)*psi(grid_size-5) - Scalar(16)*psi(grid_size-4) + Scalar(36)*psi(grid_size-3) - Scalar(48)*psi(grid_size-2) + Scalar(25)*psi(grid_size-1)) * o12 * inv_h;
    }
  }


  void apply_ko_dissipation(const State &x, State &dxdt) const {
    const auto N = param.N;
    const long long int grid_size = N + 1;
    const Scalar eps = param.ko_epsilon;
    if(eps == Scalar(0)) return;

    const Scalar o16 = Scalar(1) / Scalar(16);

    for(long long int i = 0; i < grid_size; ++i) {
      const long long int i0 = (i >= 2) ? (i - 2) : 0;
      const long long int i1 = (i >= 1) ? (i - 1) : 0;
      const long long int i2 = i;
      const long long int i3 = (i + 1 < grid_size) ? (i + 1) : (grid_size - 1);
      const long long int i4 = (i + 2 < grid_size) ? (i + 2) : (grid_size - 1);
      dxdt(i) -= eps * o16 * (x(i0) - Scalar(4)*x(i1) + Scalar(6)*x(i2) - Scalar(4)*x(i3) + x(i4));
    }
  }
};


#endif
