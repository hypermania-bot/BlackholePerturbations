/*! 
  \file teukolsky_precise.hpp
  \author Siyang Ling
  \brief Header for the Teukolsky equation (Schwarzschild, a=0) with high precision CPU arithmetic.
*/
#ifndef TEUKOLSKY_PRECISE_HPP
#define TEUKOLSKY_PRECISE_HPP

#include <Eigen/Dense>
#include <boost/math/special_functions/lambert_w.hpp>
#include <boost/multiprecision/cpp_bin_float.hpp>
#include <boost/multiprecision/float128.hpp>
#include <boost/multiprecision/eigen.hpp>
#include "discretization.hpp"

#ifdef _OPENMP
#include <omp.h>
#endif


struct TeukolskyPDEPreciseParam {
  typedef boost::multiprecision::float128 Scalar;
  long long int s, l;
  Scalar M, r_min, r_max;
  long long int N;
  Scalar ko_epsilon;
  Scalar t_start, t_end, t_interval, delta_t;
};


struct TeukolskyPDEPrecise {
  typedef TeukolskyPDEPreciseParam Param;
  typedef boost::multiprecision::float128 Scalar;
  typedef Eigen::Array<Scalar, -1, 1> Vector;
  typedef Vector State;
  
  Param param;
  Vector V, A, C;
  Scalar inv_h, inv_h_sqr;
  long long int grid_size;
  std::function<Vector(const Scalar)> Q;

  mutable Vector m_Qbuf;
  
  TeukolskyPDEPrecise(Param param_) : param(param_) {
    const Scalar r_min = param.r_min, r_max = param.r_max;
    const auto N = param.N;
    const Scalar M = param.M;
    const auto s = param.s, l = param.l;

    grid_size = N + 1;
    const Scalar h = (r_max - r_min) / (N - 1);
    inv_h = Scalar(1) / h;
    inv_h_sqr = inv_h * inv_h;

    V.resize(grid_size); A.resize(grid_size); C.resize(grid_size);

    Vector r = compute_r_vector(r_min, r_max, N, Scalar(2)*M);
    const Scalar twoM = Scalar(2) * M;
    const Vector rm2M = r - twoM;
    const Vector inv_r = Scalar(1) / r;
    const Vector inv_r2 = inv_r * inv_r;
    const Vector inv_r4 = inv_r2 * inv_r2;

    V = rm2M * inv_r4 * (r * Scalar((l - s) * (l + s + 1)) + twoM * Scalar(1 + s));
    A = Scalar(2 * s) * (r - Scalar(3) * M) * inv_r2;
    C = Scalar(2 * s) * (r - M) * inv_r2;
    Q = [N](const Scalar t)->Vector{ return Vector::Zero(N+1); };
    m_Qbuf.resize(grid_size);
  }


  void operator()(const State &x, State &dxdt, const Scalar t) {
    using namespace Eigen;
    const long long int gs = grid_size;
    const Scalar o12 = Scalar(1) / Scalar(12);
    const Scalar h1 = inv_h, h2 = inv_h_sqr;

    const auto psi = x.head(gs);
    const auto Pi  = x.tail(gs);
    auto dpsi = dxdt.head(gs);
    auto dPi  = dxdt.tail(gs);

    m_Qbuf = Q(t);

    const Scalar eps = param.ko_epsilon;
    const Scalar o16 = Scalar(1) / Scalar(16);
    const Scalar kofac = eps * o16;

    // Single thread team for all loops
#pragma omp parallel
    {
      // Interior: dpsi=Pi-KO, dPi=d2-C*d1-A*Pi-V*psi+Q
#pragma omp for schedule(static)
      for(long long int i = 2; i <= gs - 3; ++i) {
        Scalar d2 = (-psi(i-2) + Scalar(16)*psi(i-1) - Scalar(30)*psi(i)
                      + Scalar(16)*psi(i+1) - psi(i+2)) * o12 * h2;
        Scalar d1 = ( psi(i-2) - Scalar(8)*psi(i-1) + Scalar(8)*psi(i+1) - psi(i+2)) * o12 * h1;
        dPi(i) = d2 - C[i]*d1 - A[i]*Pi(i) - V[i]*psi(i) + m_Qbuf(i);
        dpsi(i) = Pi(i) - kofac * (psi(i-2) - Scalar(4)*psi(i-1) + Scalar(6)*psi(i)
                                   - Scalar(4)*psi(i+1) + psi(i+2));
      }

      // Boundaries — one thread each
#pragma omp single nowait
      {
        Scalar d2_0 = ( Scalar(35)*psi(0) - Scalar(104)*psi(1) + Scalar(114)*psi(2)
                       - Scalar(56)*psi(3) + Scalar(11)*psi(4) ) * o12 * h2;
        Scalar d1_0 = (-Scalar(25)*psi(0) + Scalar(48)*psi(1) - Scalar(36)*psi(2)
                       + Scalar(16)*psi(3) - Scalar(3)*psi(4) ) * o12 * h1;
        dPi(0) = d2_0 - C[0]*d1_0 - A[0]*Pi(0) - V[0]*psi(0) + m_Qbuf(0);
        dpsi(0) = Pi(0) - kofac * (psi(0) - Scalar(4)*psi(1) + Scalar(6)*psi(2)
                                   - Scalar(4)*psi(3) + psi(4));

        Scalar d2_1 = ( Scalar(11)*psi(0) - Scalar(20)*psi(1) + Scalar(6)*psi(2)
                       + Scalar(4)*psi(3) - psi(4) ) * o12 * h2;
        Scalar d1_1 = (-Scalar(3)*psi(0) - Scalar(10)*psi(1) + Scalar(18)*psi(2)
                       - Scalar(6)*psi(3) + psi(4) ) * o12 * h1;
        dPi(1) = d2_1 - C[1]*d1_1 - A[1]*Pi(1) - V[1]*psi(1) + m_Qbuf(1);
        dpsi(1) = Pi(1) - kofac * (psi(0) - Scalar(4)*psi(1) + Scalar(6)*psi(2)
                                   - Scalar(4)*psi(3) + psi(4));

        Scalar d2_m2 = ( -psi(gs-5) + Scalar(4)*psi(gs-4) + Scalar(6)*psi(gs-3)
                        - Scalar(20)*psi(gs-2) + Scalar(11)*psi(gs-1) ) * o12 * h2;
        Scalar d1_m2 = ( -psi(gs-5) + Scalar(6)*psi(gs-4) - Scalar(18)*psi(gs-3)
                        + Scalar(10)*psi(gs-2) + Scalar(3)*psi(gs-1) ) * o12 * h1;
        dPi(gs-2) = d2_m2 - C[gs-2]*d1_m2 - A[gs-2]*Pi(gs-2) - V[gs-2]*psi(gs-2) + m_Qbuf(gs-2);
        dpsi(gs-2) = Pi(gs-2) - kofac * (psi(gs-5) - Scalar(4)*psi(gs-4) + Scalar(6)*psi(gs-3)
                                         - Scalar(4)*psi(gs-2) + psi(gs-1));

        Scalar d2_m1 = ( Scalar(11)*psi(gs-5) - Scalar(56)*psi(gs-4) + Scalar(114)*psi(gs-3)
                        - Scalar(104)*psi(gs-2) + Scalar(35)*psi(gs-1) ) * o12 * h2;
        Scalar d1_m1 = ( Scalar(3)*psi(gs-5) - Scalar(16)*psi(gs-4) + Scalar(36)*psi(gs-3)
                        - Scalar(48)*psi(gs-2) + Scalar(25)*psi(gs-1) ) * o12 * h1;
        dPi(gs-1) = d2_m1 - C[gs-1]*d1_m1 - A[gs-1]*Pi(gs-1) - V[gs-1]*psi(gs-1) + m_Qbuf(gs-1);
        dpsi(gs-1) = Pi(gs-1) - kofac * (psi(gs-5) - Scalar(4)*psi(gs-4) + Scalar(6)*psi(gs-3)
                                         - Scalar(4)*psi(gs-2) + psi(gs-1));
      }
    }
  }


  static Vector compute_r_vector(const Scalar r_min, const Scalar r_max,
                                  const long long int N, const Scalar r0) {
    using boost::multiprecision::cpp_bin_float_100;
    using boost::math::lambert_w0;
    typedef boost::multiprecision::cpp_bin_float_100 HP;
    HP rm = static_cast<HP>(r_min), rM = static_cast<HP>(r_max), r0hp = static_cast<HP>(r0);
    HP hhp = (rM - rm) / (N - 1);
    Vector r(N + 1);
#pragma omp parallel for schedule(static)
    for(long long int i = 0; i < N + 1; ++i) {
      HP rast = rm + i * hhp - hhp / HP(2);
      HP ex = exp(rast / r0hp - HP(1));
      HP lw = lambert_w0(ex / r0hp);
      r[i] = (r0hp * (HP(1) + lw)).convert_to<Scalar>();
    }
    return r;
  }


  static Vector compute_r_ast_vector(const Scalar r_min, const Scalar r_max, const long long int N) {
    Scalar h = (r_max - r_min) / (N - 1);
    Vector r_ast(N + 1);
#pragma omp parallel for schedule(static)
    for(long long int i = 0; i < N + 1; ++i)
      r_ast[i] = r_min + i * h - h / Scalar(2);
    return r_ast;
  }
};


#endif
