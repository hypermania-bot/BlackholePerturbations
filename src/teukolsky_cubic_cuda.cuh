/*! 
  \file teukolsky_cubic_cuda.cuh
  \author Siyang Ling
  \brief Header for Teukolsky equations that runs on the GPU.

*/
#ifndef TEUKOLSKY_SCALAR_CUDA_CUH
#define TEUKOLSKY_SCALAR_CUDA_CUH

#include <map>

#include <Eigen/Dense>
// #include <boost/math/special_functions/lambert_w.hpp>
#include <boost/multiprecision/cpp_bin_float.hpp>
// #include <boost/multiprecision/float128.hpp>
#include <boost/multiprecision/eigen.hpp>
//#include "discretization.hpp"

#include "teukolsky_scalar.hpp"
#include "teukolsky.hpp"
#include <thrust/device_vector.h>
#include <thrust/complex.h>
#include <cuda_runtime.h>


/*! 
  \brief Teukolsky equation with \f$ s=0 \f$ that runs with CUDA.
*/
struct CudaTeukolskyScalarPDE {
  typedef TeukolskyScalarPDEParam Param;
  typedef double Scalar;
  typedef thrust::complex<Scalar> ComplexScalar;
  typedef thrust::device_vector<double> Vector;
  typedef thrust::device_vector<thrust::complex<double>> ComplexVector;

  typedef Teukolsky::HighPrecisionScalar HighPrecisionScalar;
  typedef Teukolsky::HighPrecisionComplex HighPrecisionComplex;
  typedef Teukolsky::HighPrecisionVector HighPrecisionVector;
  typedef Teukolsky::HighPrecisionComplexVector HighPrecisionComplexVector;

  typedef ComplexVector State;
  
  Param param;
  std::function<void(const State &, State &, const Scalar)> add_source;
  long long int grid_size;
  long long int lm_size;

  //typedef Teukolsky::CouplingInfo CouplingInfo;
  Teukolsky::CouplingInfo psi_lm_map;
  Teukolsky::CouplingInfo dr_psi_lm_map;
  Teukolsky::CouplingInfo drdr_psi_lm_map;
  Teukolsky::CouplingInfo dt_psi_lm_map;

  std::vector<ComplexVector> coeffs;
  ComplexVector drdr_psi_lm;
  ComplexVector dr_psi_lm;
  ComplexVector ko_psi_lm;

  // CUDA graph instances for evaluating the system ( used in operator() )
  std::map<std::pair<const void *, const void *>, cudaGraphExec_t> graph_exec_mapping;

  std::vector<ComplexVector> lambda_coeffs;
  ComplexVector psi_sqr_lm;

  std::map<std::pair<const void *, const void *>, cudaGraphExec_t> lambda_graph_exec_mapping;
  
  CudaTeukolskyScalarPDE(Param param_);


  /*!
    \brief The function called by odeint library.
    \param[in] x The current state of the system.
    \param[out] dxdt The time derivative, dxdt of the system.
    \param t The current time parameter.
  */
  void operator()(const State &x, State &dxdt, const Scalar t);
  
  cudaGraph_t prepare_cuda_graph(const State &x, State &dxdt);
  cudaGraph_t prepare_lambda_cuda_graph(const State &x, State &dxdt);

};


#endif
