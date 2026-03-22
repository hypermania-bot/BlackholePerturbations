/*! 
  \file pde_cuda_kernel.cuh
  \author Siyang Ling
  \brief CUDA kernels for 1+1D PDEs.
*/
#ifndef PDE_CUDA_KERNEL_CUH
#define PDE_CUDA_KERNEL_CUH

#include <thrust/complex.h>
#include <vector>

namespace CUDAKernel {
  typedef void *FunctionPointer;

  
  /*! \brief Compute 1D second order derivative from `in` and store to `out`.  */
  __global__
  void drdr_complex_double_kernel(thrust::complex<double> * __restrict__ out, const thrust::complex<double> * __restrict__ in, const int grid_size, const double inv_h_sqr);
  
  /*! \brief Compute 1D first order derivative from `in` and store to `out`.  */
  __global__
  void dr_complex_double_kernel(thrust::complex<double> * __restrict__ out, const thrust::complex<double> * __restrict__ in, const int grid_size, const double inv_h);

  /*! \brief Compute 1D first order derivative from `in` and store to `out`.  */
  __global__
  void ko_complex_double_kernel(thrust::complex<double> * __restrict__ out, const thrust::complex<double> * __restrict__ in, const int grid_size, const double epsilon);

  /*! \brief Compute 1D first order derivative from `in` and store to `out`.  */
  __global__
  void ko_and_copy_complex_double_kernel(thrust::complex<double> * __restrict__ out, const thrust::complex<double> * __restrict__ in1, const thrust::complex<double> * __restrict__ in2, const int grid_size, const double epsilon);

  /*!
    \brief Contains function pointers assigning quadratic terms on the RHS to LHS.

    For `assign_lhs_2terms_complex_double_kernels[n]`, the kernel has (2n+2) parameters: `thrust::complex<double> * __restrict__ lhs_ptr`, and then `const thrust::complex<double> * __restrict__ term1_ptr_i` and `const thrust::complex<double> * __restrict__ term2_ptr_i` for \f$ 0 \leq i < n \f$, and `const int grid_size`.
    The kernel assigns \f$ lhs = - term1_0 * term2_0 - term1_1 * term2_1 - \hdots - term1_{n-1} * term2_{n-1} \f$, where each pointer is evaluated over \f$ ptr + [0,grid_size) \f$.
    
   */
  extern const std::vector<FunctionPointer> assign_lhs_2terms_complex_double_kernels;

  extern const std::vector<FunctionPointer> assign_coeff_lhs_2terms_complex_double_kernels;
  extern const std::vector<FunctionPointer> accum_coeff_lhs_2terms_complex_double_kernels;

}

#endif
