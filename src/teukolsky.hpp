/*! 
  \file teukolsky.hpp
  \author Siyang Ling
  \brief Header for subroutines related to the Teukolsky equation.
  
  Header for subroutines related to the Teukolsky equation.
  Includes routine to calculate the radial coordinate in terms of Regge-Wheeler coordinates, generated data for coupling between harmonic modes, and routines to calculate the coupling coefficients.
  This file does not contain an `odeint` equation class; other files will use this file implement `odeint` equation classes.
*/
#ifndef TEUKOLSKY_HPP
#define TEUKOLSKY_HPP

#include <Eigen/Dense>
// #include <boost/math/special_functions/lambert_w.hpp>
#include <boost/multiprecision/cpp_bin_float.hpp>
// #include <boost/multiprecision/float128.hpp>
#include <boost/multiprecision/eigen.hpp>
//#include "discretization.hpp"
#include <complex>
#include <vector>

namespace Teukolsky
{
  typedef double Scalar;
  typedef std::complex<Scalar> ComplexScalar;
  typedef Eigen::Array<Scalar, -1, 1> Vector;
  typedef Eigen::Array<ComplexScalar, -1, 1> ComplexVector;
  
  //typedef boost::multiprecision::cpp_bin_float_100 HighPrecisionScalar;
  typedef boost::multiprecision::number<boost::multiprecision::cpp_bin_float<2000>> HighPrecisionScalar;
  typedef std::complex<HighPrecisionScalar> HighPrecisionComplex;
  typedef Eigen::Array<HighPrecisionScalar, -1, 1> HighPrecisionVector;
  typedef Eigen::Array<HighPrecisionComplex, -1, 1> HighPrecisionComplexVector;

  typedef std::vector<std::unordered_map<long long int, long long int>> CouplingInfo;
  typedef std::vector<std::vector<std::pair<long long int, long long int>>> CouplingInfoFlat;
  
  /*!
    \brief Given info for all lm -> (lm1, coeff_idx), use cutoff l_max, keep only terms with lm and lm1 below cutoff.
  */
  CouplingInfo make_coupling_info_map(const CouplingInfoFlat &info, const long long int l_max);
  
  Vector compute_r_vector(const Scalar rast_min, const Scalar rast_max, const long long int N, const Scalar M, const Scalar a);

  HighPrecisionVector compute_hp_r_vector(const HighPrecisionScalar rast_min, const HighPrecisionScalar rast_max, const long long int N, const HighPrecisionScalar M, const HighPrecisionScalar a);


  extern const CouplingInfoFlat psi_lm_coupling_info_scalar;
  extern const CouplingInfoFlat dr_psi_lm_coupling_info_scalar;
  extern const CouplingInfoFlat drdr_psi_lm_coupling_info_scalar;
  extern const CouplingInfoFlat dt_psi_lm_coupling_info_scalar;
  
  std::vector<ComplexVector> compute_coeffs_scalar(const HighPrecisionScalar a, const HighPrecisionScalar M, const HighPrecisionVector &r);

  void prepare_coeffs_scalar(std::vector<ComplexVector> &coeffs, const Scalar rast_min, const Scalar rast_max, const long long int N, const Scalar M, const Scalar a);
}

#endif
