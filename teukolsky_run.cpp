/*!
  Standalone runner for teukolsky_precise sourced simulations.
  Usage: ./teukolsky_run <s> <l> <beta> <output_dir>
*/
#include <Eigen/Dense>
#include <boost/numeric/odeint.hpp>
#include <boost/numeric/odeint/external/eigen/eigen.hpp>
#include "odeint_eigen/eigen_operations.hpp"
#include "teukolsky_precise.hpp"
#include "utility.hpp"
#include "param.hpp"
#include "io.hpp"
#include "discretization.hpp"

using namespace Eigen;
using namespace boost::numeric::odeint;
typedef boost::multiprecision::float128 Scalar;
typedef TeukolskyPDEPrecise::State State;

int main(int argc, char **argv) {
  if(argc < 5) {
    std::cerr << "Usage: " << argv[0] << " <s> <l> <beta> <output_dir>" << std::endl;
    return 1;
  }
  const long long int s = std::stoll(argv[1]);
  const long long int l = std::stoll(argv[2]);
  const long long int beta = std::stoll(argv[3]);
  const std::string dir_d(argv[4]);
  const std::string dir = (dir_d.back() == '/') ? dir_d : dir_d + "/";

  const Scalar M = Scalar(1) / Scalar(2);
  const Scalar r0 = Scalar(2) * M;
  const Scalar r_min = -500, r_max = 1000;
  const long long int N = static_cast<long long int>((r_max - r_min) / 0.03);

  const Scalar t_start = 0, t_end = Scalar(1000), delta_t = Scalar(0.01);
  const Scalar ko_epsilon = (std::llabs(s) == 2) ? Scalar("0.7") : Scalar("0.5");

  prepare_directory_for_output(dir);

  TeukolskyPDEPreciseParam param;
  param.s = s; param.l = l; param.M = M;
  param.r_min = r_min; param.r_max = r_max; param.N = N;
  param.ko_epsilon = ko_epsilon;
  param.t_start = t_start; param.t_end = t_end;
  param.t_interval = Scalar("0.5"); param.delta_t = delta_t;
  save_param_for_Mathematica(param, dir);

  TeukolskyPDEPrecise eqn(param);
  auto stepper = runge_kutta_dopri5<State, Scalar, State, Scalar>();

  // Source: r^{-beta} * outgoing Gaussian at r_* = 50
  TeukolskyPDEPrecise::Vector r_ast = eqn.compute_r_ast_vector(r_min, r_max, N);
  TeukolskyPDEPrecise::Vector r = eqn.compute_r_vector(r_min, r_max, N, r0);

  const Scalar r_source = Scalar(50);
  const Scalar sigma = Scalar("0.5");
  const Scalar pf = boost::multiprecision::pow(
    Scalar(2) * boost::math::constants::pi<Scalar>(), Scalar("-0.5")) / sigma;
  const Scalar denom = Scalar(2) * sigma * sigma;

  const long long int cutoff_idx = r_ast_to_i(
    param.r_min.convert_to<double>(), param.r_max.convert_to<double>(), N, 10.0);
  TeukolskyPDEPrecise::Vector front_factor = r.pow(-beta);
  front_factor.head(cutoff_idx) = Scalar(0);
  front_factor *= pf;

  eqn.Q = [&](const Scalar t) -> TeukolskyPDEPrecise::Vector {
    TeukolskyPDEPrecise::Vector result(N+1);
#pragma omp parallel for schedule(static)
    for(long long int i = 0; i <= N; ++i) {
      Scalar arg = t - r_ast[i] + r_source;
      result[i] = front_factor[i] * boost::multiprecision::exp(-arg * arg / denom);
    }
    return result;
  };

  // Simple observer saving psi and Pi at r_* = 50
  const long long int rIdx = r_ast_to_i(
    param.r_min.convert_to<double>(), param.r_max.convert_to<double>(), N, 50.0);
  std::vector<double> t_list, psi_list, Pi_list;

  auto observer = [&](const State &x, Scalar t){
    t_list.push_back(static_cast<double>(t));
    psi_list.push_back(static_cast<double>(x[rIdx]));
    Pi_list.push_back(static_cast<double>(x[N+1 + rIdx]));
  };

  State state = State::Zero(2 * (N+1));

  run_and_measure_time(("s=" + std::to_string(s) + " l=" + std::to_string(l) +
                        " beta=" + std::to_string(beta)).c_str(), [&](){
    int num_steps = integrate_adaptive(stepper, std::ref(eqn), state,
                                       t_start, t_end, delta_t, std::ref(observer));
    std::cout << "total number of steps = " << num_steps << std::endl;
  });

  write_to_file(psi_list, dir + "psi_list.dat");
  write_to_file(Pi_list, dir + "Pi_list.dat");
  write_to_file(t_list, dir + "t_list.dat");
  std::cout << "Done." << std::endl;
  return 0;
}
