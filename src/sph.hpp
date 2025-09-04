/*!
  \file sph.hpp
  \brief Spherical harmonic related utilities.
  
*/
#ifndef SPH_HPP
#define SPH_HPP

#include <tuple>
#include <utility>
#include <vector>
#include <array>
#include <cmath>
#include <unordered_set>


namespace SPH {
  
  typedef std::tuple<long long int, long long int, long long int, double> QuadraticTermInfo;
  typedef std::vector<std::vector<std::tuple<double, long long int, long long int>>> CouplingInfo;
  
  extern const long long int l_max_for_terms;
  
  /*! \brief Edmond coefficients as defined in equation (38) of arXiv:gr-qc/0607025. */
  extern const std::array<QuadraticTermInfo, 38025> edmond_coeffs;

  
  constexpr long long int lm_to_idx(const long long int l, const long long int m) {
    return l*l + (m-(-l));
  }

  constexpr std::pair<long long int, long long int> idx_to_lm(const long long int idx) {
    const long long int l = static_cast<long long int>(std::sqrt(static_cast<double>(idx)));
    const long long int m = idx - l * l - l;
    return std::make_pair(l, m);
  }
  
  /*!
    \brief Given Edmond coefficients, use cutoff l_max, keep only terms with lm's below cutoff.
  */
  CouplingInfo make_coupling_info_map(const long long int l_max);

  /*!
    \brief Given Edmond coefficients, use cutoff l_max, keep only terms with lm's below cutoff, and lm1 needs to be within the nonzero_pos set.
  */
  CouplingInfo make_coupling_info_map(const long long int l_max, const std::vector<long long int> &nonzero_pos);
  
}

#endif
