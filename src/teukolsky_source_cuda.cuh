/*! 
  \file teukolsky_source_cuda.cuh
  \author Siyang Ling
  \brief Header for source for Teukolsky equations that runs on the GPU.

*/
#ifndef TEUKOLSKY_SOURCE_CUDA_CUH
#define TEUKOLSKY_SOURCE_CUDA_CUH

#include <map>

#include <Eigen/Dense>
// #include <boost/math/special_functions/lambert_w.hpp>
#include <boost/multiprecision/cpp_bin_float.hpp>
// #include <boost/multiprecision/float128.hpp>
#include <boost/multiprecision/eigen.hpp>

// #include "teukolsky_scalar.hpp"
#include "teukolsky.hpp"
#include <thrust/device_vector.h>
#include <thrust/complex.h>
#include <cuda_runtime.h>

typedef enum { PowerLaw, DiracDelta } SourceType;

/*! 
  \brief Moving Gaussian packet source for Teukolsky equation.
*/
struct TeukolskySourceParam {
  // typedef boost::multiprecision::float128 Scalar;
  typedef double Scalar;
  Scalar M;
  Scalar a;
  Scalar rast_min;
  Scalar rast_max;
  long long int N;
  long long int l_max;
  
  long long int beta;
  long long int lm;
  Scalar t_i;
  Scalar r_i;
  Scalar sigma;
  Scalar A;
  SourceType type;
};


/*! 
  \brief Source for Teukolsky equation.
*/
struct CudaTeukolskySource {
  typedef TeukolskySourceParam Param;
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
  long long int grid_size;
  long long int lm_size;

  Vector spatial;
  
  CudaTeukolskySource(Param param_);


  /*!
    \brief The function called to add source to the system.
    \param[in] x The current state of the system.
    \param[out] dxdt The time derivative, dxdt of the system.
    \param t The current time parameter.
  */
  void operator()(const State &x, State &dxdt, const Scalar t);
  
  // CUDA graph instances for evaluating the system ( used in operator() )
  // std::map<std::pair<const void *, const void *>, cudaGraphExec_t> graph_exec_mapping;
  // cudaGraph_t prepare_cuda_graph(const State &x, State &dxdt);

};


#endif
