#include <vector>
#include <algorithm>
#include <functional>
#include <typeinfo>
//#include <thread>
#include <random>
#include <optional>

#include <Eigen/Dense>
#include <boost/numeric/odeint.hpp>
#include <boost/numeric/odeint/external/eigen/eigen.hpp>
#include "odeint_eigen/eigen_operations.hpp"

#include <boost/multiprecision/cpp_bin_float.hpp>
#include <boost/lockfree/queue.hpp>
#include <thread>

#include "utility.hpp"
#include "param.hpp"
#include "io.hpp"
#include "observer.hpp"

//#include "regge_wheeler.hpp"
//#include "regge_wheeler_precise.hpp"
//#include "cubic_scalar_simplified.hpp"
#include "cubic_scalar.hpp"

#include "boost/type_index.hpp"

#include "teukolsky_scalar.hpp"
#include "teukolsky_cubic_cuda.cuh"

#include "examples.hpp"
#include "rsh.hpp"
#include "sph.hpp"

#include <thrust/device_vector.h>
#include "cuda_wrapper.cuh"
#include "odeint_thrust/thrust.hpp"
#include "pde_cuda_kernel.cuh"
#include "asset.hpp"

void run_teukolsky(void);
void run_teukolsky_benchmark(void);
// void test_cuda_graph(void);
// void test_cuda(void);
// void test_teukolsky_cuda(void);


namespace Random
{
  std::mt19937 get_generator_from_device()
  {
    std::random_device rd{};
    return std::mt19937{ rd() };
  }

  static std::mt19937 mt{ get_generator_from_device() };
  static std::normal_distribution<double> dist{0.0, 1.0};
  static std::uniform_real_distribution<double> dist_angle{0.0, 2 * std::numbers::pi};

  void set_generator_seed(std::mt19937::result_type seed)// long unsigned int seed)
  {
    mt = std::mt19937{ seed };
  }
  double generate_random_normal()
  {
    return dist(mt);
  }
  double generate_random_angle()
  {
    return dist_angle(mt);
  }
}


int main(int argc, char **argv) {
  // const long long int l_max = 5;
  // const long long int lm_size = (l_max + 1) * (l_max + 1);
  // SPH::CouplingInfo info = SPH::make_coupling_info_map(l_max, {0, 6, 20, 42, 72, 110});
  // // SPH::CouplingInfo info = SPH::make_coupling_info_map(l_max);
  // for(size_t lm = 0; lm < lm_size; ++lm){
  //   std::cout << "info[" << lm << "].size() = " << info[lm].size() << std::endl;
  // }
  // return 0;
  // test_harmonic_mult();


  auto run_simulation = [&](const long long int s, const double a_over_M, const double lambda, const std::string &dir) {
    using namespace Eigen;
    using namespace boost::numeric::odeint;
    using namespace std::numbers;
    using std::array;
  
    typedef CudaTeukolskyScalarPDE Equation;
    typedef Equation::Param Param;
    typedef Equation::State State;

    // const std::string dir = "output/teukolsky_09/";
    // const std::string dir = "output/teukolsky_a_01_lambda_01/";
    const std::string temporary_dir = "asset/";
    // const std::string temporary_dir = "/media/hypermania/Drive_001/QuasiNormalModes/asset/";
    prepare_directory_for_output(dir);
    prepare_directory_for_output(temporary_dir);
    Asset::set_asset_path(temporary_dir);
  
    Param param;
    param.s = s;
    param.l_max = 1;
    param.M = 0.5;
    param.a = a_over_M * param.M;
    param.lambda = lambda;

    param.rast_min = -750;
    param.rast_max = 1500;
    param.N = static_cast<long long int>((param.rast_max - param.rast_min) / 0.03);
  
    param.t_start = 0;
    param.t_end = 1500;
    param.t_interval = 0.5;
    param.delta_t = 0.01;

    save_param_for_Mathematica(param, dir);
  
    Equation eqn(param);

    // auto stepper = runge_kutta_fehlberg78<State, double, State, double>();
    auto stepper = runge_kutta_dopri5<State, double, State, double>();

    const long long int rIdx = r_ast_to_i(param.rast_min, param.rast_max, param.N, 50.0);
    auto recorder = ThrustRecorder(rIdx, eqn.lm_size, eqn.grid_size);
    auto observer1 = DenseTransformAndRecordObserver(dir, recorder);
    std::vector<double> times;
    for(size_t i = 0; i <= 10; ++i){
      times.push_back(150.0 + 5.0 * i);
    }
    auto observer2 = ApproximateTimeObserver(dir, times);
    auto observer = ObserverPack(observer1, observer2);
  
    State state(2 * eqn.lm_size * eqn.grid_size);
    ArrayXcd state_eigen(state.size());
    state_eigen = 0;

    ArrayXd r_ast(eqn.grid_size);
    for(int i = 0; i < eqn.grid_size; ++i) {
      r_ast[i] = i_to_r_ast(param.rast_min, param.rast_max, param.N, i);
    }

    const double r_source = 50;
    const double sigma = 0.5;
    const long long int grid_begin = RSH::lm_to_idx(1, 1) * eqn.grid_size;
    //const std::complex<double> phase_factor = exp(std::complex<double>(0.0, 1.0) * Random::generate_random_angle());
    state_eigen(seqN(grid_begin, eqn.grid_size)) = pow(2 * pi, -0.5) * (1 / sigma) * exp(-(r_ast - r_source)*(r_ast - r_source) / (2 * sigma * sigma));
    state_eigen(seqN(eqn.grid_size * eqn.lm_size + grid_begin, eqn.grid_size)) = - pow(2 * pi, -0.5) * pow(sigma, -3) * exp(-(r_ast - r_source)*(r_ast - r_source) / (2 * sigma * sigma)) * (r_ast - r_source);

    copy_vector(state, state_eigen);


  
    // // Solve the equation.
    run_and_measure_time("Solving equation",
			 [&](){
			   int num_steps = integrate_adaptive(stepper, std::ref(eqn), state, param.t_start, param.t_end, param.delta_t, std::ref(observer));
			   std::cout << "total number of steps = " << num_steps << '\n';
			 } );
    write_to_file(state, dir + "final_state.dat");
    observer.save();
  };

  // run_simulation(0, 0.01, 0.1, "output/teukolsky_a_001_lambda_01/");
  // run_simulation(0, 0.1, 0.001, "output/teukolsky_a_01_lambda_0001/");
  // run_simulation(0, 0.9, 0.001, "output/teukolsky_a_09_lambda_0001/");
  // run_simulation(0, 0.99, 0, "output/teukolsky_099/");
  // run_simulation(1, 0, 0, "output/teukolsky_s_1_a_0_lambda_0/");
  // run_simulation(1, 0.5, 0, "output/teukolsky_s_1_a_05_lambda_0/");
  // run_simulation(0, 0.1, 0, "output/teukolsky_s_0_a_01_lambda_0/");
  // run_simulation(0, 0.1, 0, "/media/hypermania/Drive_001/QuasiNormalModes/output/teukolsky_s_0_a_01_lambda_0/");
  // run_simulation(1, 0.1, 0, "/media/hypermania/Drive_001/QuasiNormalModes/output/teukolsky_s_1_a_01_lambda_0_short_lmax_3/");

  // run_simulation(1, 0.1, 0, "output/teukolsky_s_1_a_01_lambda_0_short/");
  // run_simulation(2, 0.1, 0, "/media/hypermania/Drive_001/QuasiNormalModes/output/teukolsky_s_2_a_01_lambda_0/");
  // run_simulation(2, 0.1, 0.1, "/media/hypermania/Drive_001/QuasiNormalModes/output/teukolsky_s_2_a_01_lambda_01/");
  
  // run_simulation(-1, 0.1, 0, "output/teukolsky_s_1_a_01_lambda_0_close/");
  run_simulation(-1, 0, 0, "output/teukolsky_s_1_a_0_lambda_0_close/");
  // run_simulation(0, 0.1, 0, "/media/hypermania/Drive_001/QuasiNormalModes/output/teukolsky_s_0_a_01_lambda_0_close/");
  // run_simulation(-1, 0.1, 0.1, "/media/hypermania/Drive_001/QuasiNormalModes/output/teukolsky_s_1_a_01_lambda_01/");
  // run_simulation(-2, 0.1, 0.1, "output/teukolsky_s_2_a_01_lambda_01/");
  // run_simulation(-1, 0.1, 0.1, "output/teukolsky_s_1_a_01_lambda_01_fine/");
  
  // run_simulation(-2, 0.1, 0, "/media/hypermania/Drive_001/QuasiNormalModes/output/teukolsky_s_2_a_01_lambda_0/");

  return 0;
  
  using namespace Eigen;
  using namespace boost::numeric::odeint;
  using namespace std::numbers;
  using std::array;
  
  typedef CudaTeukolskyScalarPDE Equation;
  typedef Equation::Param Param;
  typedef Equation::State State;

  // const std::string dir = "output/teukolsky_09/";
  const std::string dir = "output/teukolsky_a_01_lambda_01/";
  const std::string temporary_dir = "asset/";
  // const std::string temporary_dir = "/media/hypermania/Drive_001/QuasiNormalModes/output/";
  prepare_directory_for_output(dir);
  prepare_directory_for_output(temporary_dir);
  Asset::set_asset_path(temporary_dir);
  
  Param param;
  param.s = 0;
  param.l_max = 5;
  param.M = 0.5;
  param.a = 0.1 * param.M;
  param.lambda = 0.1;

  param.rast_min = -500;
  param.rast_max = 1000;
  param.N = static_cast<long long int>((param.rast_max - param.rast_min) / 0.03);
  
  param.t_start = 0;
  param.t_end = 1000;
  param.t_interval = 0.5;
  param.delta_t = 0.01;

  save_param_for_Mathematica(param, dir);
  
  Equation eqn(param);

  auto stepper = runge_kutta_fehlberg78<State, double, State, double>();

  const long long int rIdx = r_ast_to_i(param.rast_min, param.rast_max, param.N, 50.0);
  auto recorder = ThrustRecorder(rIdx, eqn.lm_size, eqn.grid_size);
  auto observer1 = DenseTransformAndRecordObserver(dir, recorder);
  std::vector<double> times;
  for(size_t i = 0; i <= 20; ++i){
    times.push_back(50.0 * i);
  }
  auto observer2 = ApproximateTimeObserver(dir, times);
  auto observer = ObserverPack(observer1, observer2);
  
  State state(2 * eqn.lm_size * eqn.grid_size);
  ArrayXcd state_eigen(state.size());
  state_eigen = 0;

  ArrayXd r_ast(eqn.grid_size);
  for(int i = 0; i < eqn.grid_size; ++i) {
    r_ast[i] = i_to_r_ast(param.rast_min, param.rast_max, param.N, i);
  }

  const double r_source = 50;
  const double sigma = 0.5;
  const long long int grid_begin = RSH::lm_to_idx(1, 1) * eqn.grid_size;
  //const std::complex<double> phase_factor = exp(std::complex<double>(0.0, 1.0) * Random::generate_random_angle());
  state_eigen(seqN(grid_begin, eqn.grid_size)) = pow(2 * pi, -0.5) * (1 / sigma) * exp(-(r_ast - r_source)*(r_ast - r_source) / (2 * sigma * sigma));
  state_eigen(seqN(eqn.grid_size * eqn.lm_size + grid_begin, eqn.grid_size)) = - pow(2 * pi, -0.5) * pow(sigma, -3) * exp(-(r_ast - r_source)*(r_ast - r_source) / (2 * sigma * sigma)) * (r_ast - r_source);

  copy_vector(state, state_eigen);


  
  // // Solve the equation.
  run_and_measure_time("Solving equation",
		       [&](){
			 int num_steps = integrate_adaptive(stepper, std::ref(eqn), state, param.t_start, param.t_end, param.delta_t, std::ref(observer));
			 std::cout << "total number of steps = " << num_steps << '\n';
		       } );
  write_to_file(state, dir + "final_state.dat");
  observer.save();
  
  return 0;
}

void test_teukolsky_cuda(void) {
  using namespace Eigen;
  using namespace boost::numeric::odeint;
  using namespace std::numbers;
  using std::array;
  
  typedef CudaTeukolskyScalarPDE Equation;
  typedef Equation::Param Param;
  typedef Equation::State State;
  
  Param param;
  param.s = 0;
  param.l_max = 3;
  param.M = 0.5;
  param.a = 0.49;

  param.rast_min = -50;
  param.rast_max = 750;
  param.N = static_cast<long long int>((param.rast_max - param.rast_min) / 0.03); //1000;
  
  param.t_start = 0;
  param.t_end = 1;
  param.t_interval = 0.5;
  param.delta_t = 0.01;

  Equation eqn(param);

  typedef TeukolskyScalarPDE CPUEquation;
  CPUEquation eqn_cpu(param);

  auto stepper = runge_kutta_fehlberg78<State, double, State, double>();

  for(size_t times = 0; times < 100; ++times) {
    State state(2 * eqn.lm_size * eqn.grid_size);
    ArrayXcd state_eigen(state.size());
    State dxdt(state.size());
    ArrayXcd dxdt_eigen(state.size());
    ArrayXcd dxdt_eigen_2(state.size());

    ArrayXd r_ast(eqn.grid_size);
    for(int i = 0; i < eqn.grid_size; ++i) {
      r_ast[i] = i_to_r_ast(param.rast_min, param.rast_max, param.N, i);
    }

    for(size_t i = 0; i < eqn.lm_size; ++i) {
      // const long long int grid_begin = RSH::lm_to_idx(1, 1) * eqn.grid_size;
      const double r_source = 25 + 20 * Random::generate_random_angle();
      const double sigma = 0.5;
      const long long int grid_begin = i * eqn.grid_size;
      const std::complex<double> phase_factor = exp(std::complex<double>(0.0, 1.0) * Random::generate_random_angle());
      state_eigen(seqN(grid_begin, eqn.grid_size)) = phase_factor * pow(2 * pi, -0.5) * (1 / sigma) * exp(-(r_ast - r_source)*(r_ast - r_source) / (2 * sigma * sigma));
      state_eigen(seqN(eqn.grid_size * eqn.lm_size + grid_begin, eqn.grid_size)) = - pow(2 * pi, -0.5) * pow(sigma, -3) * exp(-(r_ast - r_source)*(r_ast - r_source) / (2 * sigma * sigma)) * (r_ast - r_source) * phase_factor;
    }

    copy_vector(state, state_eigen);
    std::cout << "eqn() : 1" << std::endl;
    eqn(state, dxdt, 0.0);
    std::cout << "eqn() : 2" << std::endl;
    eqn(state, dxdt, 0.0);
    std::cout << "eqn() : 3" << std::endl;
    eqn(state, dxdt, 0.0);
    copy_vector(dxdt_eigen, dxdt);
  
    // std::cout << "(state_eigen) min, max = " << state_eigen.abs2().minCoeff() << ", " << state_eigen.abs2().maxCoeff() << std::endl;
    // std::cout << "(dxdt_eigen) min, max = " << dxdt_eigen.abs2().minCoeff() << ", " << dxdt_eigen.abs2().maxCoeff() << std::endl;
    std::cout << "(state_eigen) l2 norm = " << sqrt(state_eigen.abs2().sum()) << std::endl;
    std::cout << "(dxdt_eigen) l2 norm = " << sqrt(dxdt_eigen.abs2().sum()) << std::endl;
  
    eqn_cpu(state_eigen, dxdt_eigen_2, 0.0);

    ArrayXcd diff = dxdt_eigen_2 - dxdt_eigen;
    const double diff_normalized = sqrt(diff.abs2().sum()) / sqrt(state_eigen.abs2().sum());
    std::cout << "(diff) max = " << diff.abs2().maxCoeff() << std::endl;
    std::cout << "(diff) l2 norm normalized = " << diff_normalized << std::endl;

    assert(diff_normalized < 1e-10);

  }
}


void run_teukolsky(void) {
  using namespace Eigen;
  using namespace boost::numeric::odeint;
  using namespace std::numbers;
  using std::array;

  const std::string dir = "output/test_teukolsky_nan/";
  prepare_directory_for_output(dir);

  typedef TeukolskyScalarPDE Equation;
  typedef Equation::Param Param;
  typedef Equation::State State;
  
  Param param;
  // param.s = 0; //.convert_to<double>();
  // param.l_max = 3; //.convert_to<double>();
  // param.M = 0.5;
  // param.a = param.M * 0.9;

  // param.rast_min = -50;
  // param.rast_max = 125;
  // param.N = static_cast<long long int>((param.rast_max - param.rast_min) / 0.03); //1000;
  
  // param.t_start = 0; //.convert_to<double>();
  // param.t_end = 100; //.convert_to<double>();
  // param.t_interval = 0.5;
  // param.delta_t = 0.01; //.convert_to<double>();

  param.s = 0;
  param.l_max = 5;
  param.M = 0.5;
  param.a = 0.9 * param.M;

  param.rast_min = -500;
  param.rast_max = 1000;
  param.N = static_cast<long long int>((param.rast_max - param.rast_min) / 0.03);
  
  param.t_start = 0;
  param.t_end = 250;
  param.t_interval = 0.5;
  param.delta_t = 0.01;

  save_param_for_Mathematica(param, dir);

  Equation eqn(param);
  
  auto stepper = runge_kutta_fehlberg78<State, double, State, double>();

  const long long int rIdx = r_ast_to_i(param.rast_min, param.rast_max, param.N, 50.0);
  std::cout << "using rIdx = " << rIdx << std::endl;
  std::vector<long long int> positions;
  for(int i = 0; i < 2 * eqn.lm_size; ++i) {
    positions.push_back(eqn.grid_size * i + rIdx);
  }
  auto observer1 = GenericFixedPositionObserver<State>(dir, positions);
  
  // auto observer2 = ApproximateTimeObserver(dir, {50., 100., 150., 200., 250., 300., 350., 400., 450., 500., 550.});
  //auto observer2 = ApproximateTimeObserver(dir, {10., 20., 30., 40.});
  auto observer2 = ApproximateTimeObserver(dir, {0., 10., 20., 30., 40., 50., 60., 70., 80., 90., 100., 110., 120., 130., 140., 150., 160., 170., 180., 190., 200.});
  auto observer = ObserverPack(observer1, observer2);
  


  State state(2 * eqn.lm_size * eqn.grid_size);
  state = 0;

  ArrayXd r_ast(eqn.grid_size);
  for(int i = 0; i < eqn.grid_size; ++i) {
    r_ast[i] = i_to_r_ast(param.rast_min, param.rast_max, param.N, i);
  }

  const double r_source = 50;
  const double sigma = 0.5;
  const long long int grid_begin = RSH::lm_to_idx(1, 1) * eqn.grid_size;
  state(seqN(grid_begin, eqn.grid_size)) = pow(2 * pi, -0.5) * (1 / sigma) * exp(-(r_ast - r_source)*(r_ast - r_source) / (2 * sigma * sigma));
  state(seqN(eqn.grid_size * eqn.lm_size + grid_begin, eqn.grid_size)) = - pow(2 * pi, -0.5) * pow(sigma, -3) * exp(-(r_ast - r_source)*(r_ast - r_source) / (2 * sigma * sigma)) * (r_ast - r_source);

  // Solve the equation.
  run_and_measure_time("Solving equation",
  		       [&](){
			 // int num_steps = integrate_const(stepper, std::ref(eqn), state, param.t_start, param.t_end, param.delta_t, std::ref(observer));
			 int num_steps = integrate_adaptive(stepper, std::ref(eqn), state, param.t_start, param.t_end, param.delta_t, std::ref(observer));
			 std::cout << "total number of steps = " << num_steps << '\n';
		       } );
  write_to_file(state, dir + "final_state.dat");

  observer.save();
}

void run_teukolsky_benchmark(void) {
  using namespace Eigen;
  using namespace boost::numeric::odeint;
  using namespace std::numbers;
  using std::array;
    
  //const std::string dir = "output/quadratic_rsh_coupling_0001_ingoing/";
  const std::string dir = "output/test_teukolsky_benchmark/";
  prepare_directory_for_output(dir);

  const double r0 = 1;
  const long long int l_max = 2;  // The cutoff angular number
  const double lambda = 0;
  const double r_min = -50; //-400;
  const double r_max = 75; //600;
  //const long long int N = 1 << 15;
  const long long int N = static_cast<long long int>((r_max - r_min) / 0.03);
  
  const double r_source = 25;
  
  typedef CubicScalarPDE<l_max> Equation;
  typedef Equation::Param Param;
  typedef Equation::State State;
  
  Param param;
  param.r0 = r0;
  param.l_max = l_max;
  param.lambda = lambda;
  param.r_min = r_min;
  param.r_max = r_max;
  param.N = N;
  param.t_start = 0;
  param.t_end = 50; //r_max - r_source;
  param.t_interval = 0.5;
  param.delta_t = 0.01;

  save_param_for_Mathematica(param, dir);
  
  // The equation object.
  Equation eqn(param);
  
  // Choose the numerical integrator.
  // auto stepper = make_controlled(1e-15, 1e-15, runge_kutta_fehlberg78<State, double, State, double>());
  auto stepper = runge_kutta_fehlberg78<State, double, State, double>();


  // Extract the waveform at r_* = 50
  const long long int rIdx = r_ast_to_i(r_min, r_max, N, 50.0);
  std::cout << "using rIdx = " << rIdx << std::endl;
  std::vector<long long int> positions;
  for(int i = 0; i < 2 * eqn.lm_size; ++i) {
    positions.push_back(eqn.grid_size * i + rIdx);
  }
  auto observer1 = FixedPositionObserver(dir, positions);
  auto observer2 = ApproximateTimeObserver(dir, {10., 20., 30., 40.});
  auto observer = ObserverPack(observer1, observer2);

  
  // Initialize in-going wavepacket
  State state(eqn.state_size);
  state = 0;
  
  ArrayXd r_ast(eqn.grid_size);
  for(int i = 0; i < eqn.grid_size; ++i) {
    r_ast[i] = i_to_r_ast(r_min, r_max, N, i);
  }

  const double sigma = 0.5;
  const long long int grid_begin = RSH::lm_to_idx(1, 1) * eqn.grid_size;
  state(seqN(grid_begin, eqn.grid_size)) = pow(2 * pi, -0.5) * (1 / sigma) * exp(-(r_ast - r_source)*(r_ast - r_source) / (2 * sigma * sigma));
  state(seqN(eqn.half_state_size + grid_begin, eqn.grid_size)) = - pow(2 * pi, -0.5) * pow(sigma, -3) * exp(-(r_ast - r_source)*(r_ast - r_source) / (2 * sigma * sigma)) * (r_ast - r_source);
  
  // Solve the equation.
  run_and_measure_time("Solving equation",
  		       [&](){
			 // int num_steps = integrate_const(stepper, std::ref(eqn), state, param.t_start, param.t_end, param.delta_t, std::ref(observer));
			 int num_steps = integrate_adaptive(stepper, std::ref(eqn), state, param.t_start, param.t_end, param.delta_t, std::ref(observer));
			 std::cout << "total number of steps = " << num_steps << '\n';
		       } );
  write_to_file(state, dir + "final_state.dat");
  observer.save();

}

// void solve_rast(void) {
//   using namespace Eigen;
//   using boost::multiprecision::cpp_bin_float_100;
//   using boost::math::lambert_w0;
//   typedef boost::multiprecision::cpp_bin_float_100 HighPrecisionScalar;

//   typedef double Scalar;
//   typedef Eigen::Array<Scalar, -1, 1> Vector;
//   typedef Vector State;
  
//   const long long int N = 10000;
//   const double rast_min = -10;
//   const double rast_max = 10;
//   const double M = 0.5;
//   const double a = 0.1;
//   HighPrecisionScalar rast_min_hp = static_cast<HighPrecisionScalar>(rast_min);
//   HighPrecisionScalar rast_max_hp = static_cast<HighPrecisionScalar>(rast_max);
//   HighPrecisionScalar M_hp = static_cast<HighPrecisionScalar>(M);
//   HighPrecisionScalar a_hp = static_cast<HighPrecisionScalar>(a);
//   HighPrecisionScalar r_minus_hp = M_hp - sqrt(pow(M_hp, 2) - pow(a_hp, 2));
//   HighPrecisionScalar r_plus_hp = M_hp + sqrt(pow(M_hp, 2) - pow(a_hp, 2));
//   HighPrecisionScalar h_hp = (rast_max_hp - rast_min_hp) / (N - 1);
//   Vector r(N + 1);
//   Vector r_ast(N + 1);

//   for(long long int i = 0; i < N + 1; ++i) {
//     const HighPrecisionScalar r_ast_hp = rast_min_hp + i * h_hp - h_hp / HighPrecisionScalar(2);

//     auto r_to_rast =
//       [&](HighPrecisionScalar r_hp) -> HighPrecisionScalar {
// 	return -r_ast_hp + r_hp
// 	  + (r_plus_hp * r_plus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_plus_hp)
// 	  - (r_minus_hp * r_minus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_minus_hp);
//       };

//     std::uintmax_t it = 1000;
//     boost::math::tools::eps_tolerance<HighPrecisionScalar> tol(100);
//     std::pair<HighPrecisionScalar,HighPrecisionScalar> result = boost::math::tools::bisect(r_to_rast, r_plus_hp,rast_max_hp, tol, it);
    
//     HighPrecisionScalar r_hp = (result.first + result.second) / 2;
    
//     r[i] = r_hp.convert_to<Scalar>();
//     r_ast[i] = r_ast_hp.convert_to<Scalar>();
    
//     std::cout << std::setprecision(100);
//     std::cout << "r = " << r[i] << ", r_ast = " << r_ast[i] << std::endl;
//   }

//   // HighPrecisionScalar target = static_cast<HighPrecisionScalar>(-1000);

//   // auto r_to_rast =
//   //   [&](HighPrecisionScalar r_hp) -> HighPrecisionScalar {
//   //     std::cout << std::setprecision(100);
//   //     std::cout << "input = " << r_hp << std::endl;
//   //     return -target + r_hp
//   //     + (r_plus_hp * r_plus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_plus_hp)
//   //     - (r_minus_hp * r_minus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_minus_hp);
//   //   };
  
//   // std::uintmax_t it = 10000;
//   // int digits = std::numeric_limits<double>::digits;
//   // boost::math::tools::eps_tolerance<HighPrecisionScalar> tol(200 - 3);
//   // std::pair<HighPrecisionScalar,HighPrecisionScalar> result = boost::math::tools::bisect(r_to_rast, r_plus_hp, static_cast<HighPrecisionScalar>(100), tol, it);
//   // std::cout << std::setprecision(100);
//   // std::cout << "solution for r_ast = -100 is " << result.first << std::endl;

//   // auto r_to_rast_newton =
//   //   [&](HighPrecisionScalar r_hp) -> std::pair<HighPrecisionScalar, HighPrecisionScalar> {
//   //     std::cout << std::setprecision(100);
//   //     std::cout << "input = " << r_hp << std::endl;
//   //     return std::make_pair(-target + r_hp
//   // 			    + (r_plus_hp * r_plus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_plus_hp)
//   // 			    - (r_minus_hp * r_minus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_minus_hp),
//   // 			    (r_hp * r_hp + a_hp * a_hp) / (r_hp * r_hp - 2 * M_hp * r_hp + a_hp * a_hp) );
//   //   };
//   // HighPrecisionScalar result = boost::math::tools::newton_raphson_iterate(r_to_rast_newton, 3*M_hp, r_plus_hp, static_cast<HighPrecisionScalar>(100), 80);
  
//   // std::cout << std::setprecision(100);
//   // std::cout << "solution for r_ast = -100 is " << result << std::endl;
  
//   // {
//   //   typedef Eigen::Array<HighPrecisionScalar, -1, 1> Vector;
//   //   const HighPrecisionScalar M = HighPrecisionScalar("1.0");
//   //   const HighPrecisionScalar a = HighPrecisionScalar("0.5");
//   //   // const std::complex<HighPrecisionScalar> ii(HighPrecisionScalar("0"), HighPrecisionScalar("1"));
//   //   const long long int grid_size = 10;
//   //   auto expr = atan((a)*((pow((pow(r(seqN((2),((-4)+(grid_size)))),4))+((pow(a,2))*((r(seqN((2),((-4)+(grid_size)))))*(((2)*(M))+(r(seqN((2),((-4)+(grid_size)))))))),-1))*((sqrt(r(seqN((2),((-4)+(grid_size))))))*((sqrt((pow(a,2))+((r(seqN((2),((-4)+(grid_size)))))*(((-2)*(M))+(r(seqN((2),((-4)+(grid_size)))))))))*(sqrt((pow(r(seqN((2),((-4)+(grid_size)))),3))+((pow(a,2))*(((2)*(M))+(r(seqN((2),((-4)+(grid_size)))))))))))));

//   //   Vector expr_1 = sqrt((pow(a,2))+((r(seqN((0),(grid_size))))*(((-2)*(M))+(r(seqN((0),(grid_size)))))));
//   //   Vector expr_2 = sqrt((pow(r(seqN((0),(grid_size))),3))+((pow(a,2))*(((2)*(M))+(r(seqN((0),(grid_size)))))));
//   //   Vector expr_3 = sqrt(r(seqN((0),(grid_size))));
//   //   Vector expr_4 = atan((a)*((expr_1)*((expr_2)*((expr_3)*(pow((pow(r(seqN((0),(grid_size))),4))+((pow(a,2))*((r(seqN((0),(grid_size))))*(((2)*(M))+(r(seqN((0),(grid_size))))))),-1))))));

//   // }

// }
