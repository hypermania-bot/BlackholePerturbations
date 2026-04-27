/*! 
  \file cubic_scalar.hpp
  \author Siyang Ling
  \brief Header for nonlinear scalar field QNM simulation.

*/
#ifndef CUBIC_SCALAR_HPP
#define CUBIC_SCALAR_HPP

#include <Eigen/Dense>
#include <boost/math/special_functions/lambert_w.hpp>
#include <boost/multiprecision/cpp_bin_float.hpp>
#include "discretization.hpp"
#include "coeffs.hpp"
#include "rsh.hpp"

struct CubicScalarPDEParam {
  double r0;
  long long int l_max;
  double lambda; // coeff for the \Phi^3 term
  
  double r_min;
  double r_max;
  long long int N;

  double t_start;
  double t_end;
  double t_interval;
  double delta_t;
};


template<long long int l_max, long long int lm_idx, bool done = (lm_idx >= (l_max + 1) * (l_max + 1))>
struct CubicScalarPDEExpressionAccumulator;

template<long long int l_max, long long int lm_idx>
struct CubicScalarPDEExpressionAccumulator<l_max, lm_idx, false> {
  long long int half_state_size;
  long long int grid_size;
  constexpr CubicScalarPDEExpressionAccumulator(const long long int half_state_size_, const long long int grid_size_) :
    half_state_size(half_state_size_), grid_size(grid_size_) {}

  void exec(const Eigen::ArrayXd &x, Eigen::ArrayXd &dxdt, const Eigen::ArrayXd &V_lambda, const std::vector<Eigen::ArrayXd> &V_l) const {
    using namespace Eigen;
    const long long int l = RSH::idx_to_lm(lm_idx).first;
    // Remember that V_lambda = lambda * (r0 - r) / pow(r, 2);
    dxdt(seqN(half_state_size + lm_idx * grid_size, grid_size))
      += RSH::quadratic_rsh_expression<l_max, lm_idx>(x, grid_size) * V_lambda
      - x(seqN(lm_idx * grid_size, grid_size)) * V_l[l];
    CubicScalarPDEExpressionAccumulator<l_max, lm_idx + 1>(half_state_size, grid_size).exec(x, dxdt, V_lambda, V_l);
  }
};

template<long long int l_max, long long int lm_idx>
struct CubicScalarPDEExpressionAccumulator<l_max, lm_idx, true> {
  constexpr CubicScalarPDEExpressionAccumulator(const long long int half_state_size_, const long long int grid_size_) {}
  void exec(const Eigen::ArrayXd &x, Eigen::ArrayXd &dxdt, const Eigen::ArrayXd &V_lambda, const std::vector<Eigen::ArrayXd> &V_l) const {}
};
			    


/*! 
  \brief Scalar equation with a \f$ \lambda \Phi^3 \f$ interaction.
*/
template<long long int l_max>
struct CubicScalarPDE {
  typedef CubicScalarPDEParam Param;
  typedef Eigen::ArrayXd Vector;
  typedef Vector State;
  
  Param param;
  long long int lm_size;
  long long int grid_size;
  long long int half_state_size;
  long long int state_size;
  std::vector<Vector> V_l;
  Vector V_lambda;
  
  CubicScalarPDE(Param param_) : param(param_) {
    using namespace Eigen;
    using boost::multiprecision::cpp_bin_float_100;
    using boost::math::lambert_w0;


    const auto r0 = param.r0;
    // const auto l_max = param.l_max;
    const auto lambda = param.lambda;
    const auto r_min = param.r_min;
    const auto r_max = param.r_max;
    const auto N = param.N;

    lm_size = (l_max + 1) * (l_max + 1);
    grid_size = N + 1;
    half_state_size = lm_size * grid_size;
    state_size = 2 * half_state_size;
    
    Vector r(grid_size);
    for(int i = 0; i < grid_size; ++i) {
      const double r_ast = i_to_r_ast(r_min, r_max, N, i);
      const cpp_bin_float_100 exponent = r_ast / r0 - 1.0;
      const cpp_bin_float_100 exponential = exp(exponent);
      const cpp_bin_float_100 lambert_val = lambert_w0(exponential / cpp_bin_float_100(r0));
      const double lambert_val_double = lambert_val.convert_to<double>();
      r[i] = r0 * (1.0 + lambert_val_double);
    }
    
    V_l.resize(l_max + 1);
    for(long long int l = 0; l <= l_max; ++l) {
      V_l[l] = l * (l + 1) * (r - r0) / pow(r, 3) + r0 * (r - r0) / pow(r, 4);
    }

    V_lambda = lambda * (r0 - r) / pow(r, 2);
  }

  // Second order derivative has O(h^2) error
  // Absorbing boundary conditions are used
  void free_propagation_orig(const Eigen::ArrayXd &x, Eigen::ArrayXd &dxdt) const {
    using namespace Eigen;
    const auto N = param.N;
    const double h = get_h(param.r_min, param.r_max, N);
    
    for(long long int lm_1 = 0; lm_1 < lm_size; ++lm_1) {
      const long long int grid_begin = lm_1 * grid_size;
      const long long int dt_grid_begin = half_state_size + lm_1 * grid_size;

      dxdt(seqN(dt_grid_begin+1,grid_size-2))
	= (x(seqN(grid_begin,grid_size-2)) + x(seqN(grid_begin+2,grid_size-2)) - 2 * x(seqN(grid_begin+1,grid_size-2))) / (h*h);
	// - (V_l[l](seqN(1,grid_size-2)) * x(seqN(grid_begin+1,grid_size-2)));
      dxdt(dt_grid_begin)
	= 2 * (x(dt_grid_begin+1) - x(dt_grid_begin)) / h - (x(grid_begin) + x(grid_begin+2) - 2 * x(grid_begin+1)) / (h*h);
      //- V_l[l](0) * x(grid_begin);
      dxdt(dt_grid_begin+grid_size-1)
	= -2 * (x(dt_grid_begin+grid_size-1) - x(dt_grid_begin+grid_size-2)) / h - (x(grid_begin+grid_size-1) + x(grid_begin+grid_size-3) - 2 * x(grid_begin+grid_size-2)) / (h*h);
	//- V_l[l](0) * x(grid_begin); 
    }
  }

  // Second order derivative has O(h^4) error
  // Absorbing boundary conditions are used
  void free_propagation_new(const Eigen::ArrayXd &x, Eigen::ArrayXd &dxdt) const {
    using namespace Eigen;
    const auto N = param.N;
    const double h = get_h(param.r_min, param.r_max, N);
    
    for(long long int lm_1 = 0; lm_1 < lm_size; ++lm_1) {
      const long long int grid_begin = lm_1 * grid_size;
      const long long int dt_grid_begin = half_state_size + lm_1 * grid_size;
      
      dxdt(dt_grid_begin+0)
	= (-25.0 * x(dt_grid_begin+0) + 48.0 * x(dt_grid_begin+1) - 36.0 * x(dt_grid_begin+2) + 16.0 * x(dt_grid_begin+3) - 3.0 * x(dt_grid_begin+4) ) / (12.0*h);
      dxdt(dt_grid_begin+1)
	= (11.0 * x(grid_begin+0) - 20.0 * x(grid_begin+1) + 6.0 * x(grid_begin+2) + 4.0 * x(grid_begin+3) - x(grid_begin+4) ) / (12.0*h*h);
      dxdt(seqN(dt_grid_begin+2,grid_size-4))
	= (-1.0 * x(seqN(grid_begin,grid_size-4)) + 16.0 * x(seqN(grid_begin+1,grid_size-4)) - 30.0 * x(seqN(grid_begin+2,grid_size-4)) + 16.0 * x(seqN(grid_begin+3,grid_size-4)) - 1.0 * x(seqN(grid_begin+4,grid_size-4)) ) / (12.0*h*h);
      dxdt(dt_grid_begin+grid_size-2)
	= (-1.0 * x(grid_begin+grid_size-1-4) + 4.0 * x(grid_begin+grid_size-1-3) + 6.0 * x(grid_begin+grid_size-1-2) - 20.0 * x(grid_begin+grid_size-1-1) + 11.0 * x(grid_begin+grid_size-1-0)  ) / (12.0*h*h);
      dxdt(dt_grid_begin+grid_size-1)
	= (-3.0 * x(dt_grid_begin+grid_size-1-4) + 16.0 * x(dt_grid_begin+grid_size-1-3) - 36.0 * x(dt_grid_begin+grid_size-1-2) + 48.0 * x(dt_grid_begin+grid_size-1-1) - 25.0 * x(dt_grid_begin+grid_size-1-0)  ) / (12.0*h);
    }
  }

  
  /*!
    \brief The function called by odeint library.
    \param[in] x The current state of the system.
    \param[out] dxdt The time derivative, dxdt of the system.
    \param t The current time parameter.
  */
  void operator()(const State &x, State &dxdt, const double t) const {
    using namespace Eigen;
    using namespace std::numbers;

    // The convention is [Y_{0,0}, Y_{1,-1}, ... Y_{l_max,l_max}, dt_Y_{0,0}, ... dt_Y_{l_max,l_max}]
    dxdt.head(half_state_size) = x.tail(half_state_size);

    free_propagation_new(x, dxdt);
    CubicScalarPDEExpressionAccumulator<l_max, 0>(half_state_size, grid_size).exec(x, dxdt, V_lambda, V_l);
  }
  
};


#endif
