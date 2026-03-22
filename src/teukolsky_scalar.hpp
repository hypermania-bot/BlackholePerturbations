/*! 
  \file teukolsky_scalar.hpp
  \author Siyang Ling
  \brief Header for Teukolsky equations that runs on the CPU.

*/
#ifndef TEUKOLSKY_SCALAR_HPP
#define TEUKOLSKY_SCALAR_HPP

#include <Eigen/Dense>
// #include <boost/math/special_functions/lambert_w.hpp>
#include <boost/multiprecision/cpp_bin_float.hpp>
// #include <boost/multiprecision/float128.hpp>
#include <boost/multiprecision/eigen.hpp>
#include "discretization.hpp"


struct TeukolskyScalarPDEParam {
  // typedef boost::multiprecision::float128 Scalar;
  typedef double Scalar;
  long long int s;
  long long int l_max;
  Scalar M;
  Scalar a;
  Scalar lambda;
  
  Scalar rast_min;
  Scalar rast_max;
  long long int N;
  Scalar ko_epsilon;

  Scalar t_start;
  Scalar t_end;
  Scalar t_interval;
  Scalar delta_t;
};

/*! 
  \brief Regge-Wheeler equation with an optional source Q.
*/
struct TeukolskyScalarPDE {
  typedef TeukolskyScalarPDEParam Param;
  typedef double Scalar;
  typedef std::complex<Scalar> ComplexScalar;
  typedef Eigen::Array<Scalar, -1, 1> Vector;
  typedef Eigen::Array<ComplexScalar, -1, 1> ComplexVector;
  typedef ComplexVector State;

  typedef boost::multiprecision::cpp_bin_float_100 HighPrecisionScalar;
  typedef std::complex<HighPrecisionScalar> HighPrecisionComplex;
  typedef Eigen::Array<HighPrecisionScalar, -1, 1> HighPrecisionVector;
  typedef Eigen::Array<HighPrecisionComplex, -1, 1> HighPrecisionComplexVector;
  
  Param param;
  Vector V;
  std::function<Vector(const Scalar)> Q;
  long long int grid_size;
  long long int lm_size;

  typedef std::vector<std::unordered_map<long long int, long long int>> CouplingInfo;
  CouplingInfo psi_lm_map;
  CouplingInfo dr_psi_lm_map;
  CouplingInfo drdr_psi_lm_map;
  CouplingInfo dt_psi_lm_map;

  std::vector<ComplexVector> coeffs;
  
  TeukolskyScalarPDE(Param param_);  

  /*!
    \brief The function called by odeint library.
    \param[in] x The current state of the system.
    \param[out] dxdt The time derivative, dxdt of the system.
    \param t The current time parameter.
  */
  void operator()(const State &x, State &dxdt, const Scalar t);
  
  static std::pair<long long int, long long int> idx_to_lm(const long long int idx);

  void compute_derivatives(const State &x, ComplexVector &dr_psi_lm, ComplexVector &drdr_psi_lm) const;

};


#endif
