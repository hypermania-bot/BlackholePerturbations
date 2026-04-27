/*!
  \file teukolsky_double_double_cuda.cuh
  \brief Double-double CUDA solver for the Teukolsky equation.
*/
#ifndef TEUKOLSKY_DOUBLE_DOUBLE_CUDA_CUH
#define TEUKOLSKY_DOUBLE_DOUBLE_CUDA_CUH

#include <functional>
#include <vector>

#include <thrust/device_vector.h>
#include <cuda_runtime.h>

#include "double_double_cuda.cuh"
#include "teukolsky.hpp"
#include "teukolsky_scalar.hpp"
#include "teukolsky_source_cuda.cuh"

struct CudaTeukolskyDoubleDoubleSource {
  typedef TeukolskySourceParam Param;
  typedef double Scalar;
  typedef DoubleDouble::Real Real;
  typedef DoubleDouble::Complex ComplexScalar;
  typedef thrust::device_vector<Real> Vector;
  typedef thrust::device_vector<ComplexScalar> ComplexVector;
  typedef ComplexVector State;

  Param param;
  long long int grid_size;
  long long int lm_size;
  Vector spatial;

  CudaTeukolskyDoubleDoubleSource(Param param_);
  void operator()(const State &x, State &dxdt, const Scalar t);
};

/*!
  \brief Teukolsky equation on CUDA using double-double field arithmetic.

  This class mirrors the existing CUDA Teukolsky scalar equation, but stores
  state vectors, derivative buffers, and coefficient vectors as double-double
  complex numbers. It provides an RK4 stepping routine so it does not depend on
  the double-only odeint/thrust operation specializations.
*/
struct CudaTeukolskyScalarPDEDoubleDouble {
  typedef TeukolskyScalarPDEParam Param;
  typedef double Scalar;
  typedef DoubleDouble::Real Real;
  typedef DoubleDouble::Complex ComplexScalar;
  typedef thrust::device_vector<ComplexScalar> ComplexVector;
  typedef ComplexVector State;

  Param param;
  std::function<void(const State &, State &, const Scalar)> add_source;
  long long int grid_size;
  long long int lm_size;

  Teukolsky::CouplingInfo psi_lm_map;
  Teukolsky::CouplingInfo dr_psi_lm_map;
  Teukolsky::CouplingInfo drdr_psi_lm_map;
  Teukolsky::CouplingInfo dt_psi_lm_map;

  std::vector<ComplexVector> coeffs;
  ComplexVector drdr_psi_lm;
  ComplexVector dr_psi_lm;

  CudaTeukolskyScalarPDEDoubleDouble(Param param_);

  void operator()(const State &x, State &dxdt, const Scalar t);
  void rk4_step(State &state, const Scalar t, const Scalar dt);
  void integrate_fixed_rk4(State &state, const Scalar t_start, const Scalar t_end, const Scalar dt);
};

void copy_double_to_double_double(
  thrust::device_vector<DoubleDouble::Complex> &out,
  const Eigen::ArrayXcd &in);

void copy_double_double_to_double(
  Eigen::ArrayXcd &out,
  const thrust::device_vector<DoubleDouble::Complex> &in);

#endif
