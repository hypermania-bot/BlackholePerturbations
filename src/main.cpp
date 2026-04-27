#include <vector>
#include <algorithm>
#include <functional>
#include <typeinfo>
//#include <thread>
#include <random>
#include <optional>
//#include <format>

#include <Eigen/Dense>
#include <boost/numeric/odeint/integrate/integrate_adaptive.hpp>
#include <boost/numeric/odeint/stepper/runge_kutta_dopri5.hpp>
#include <boost/numeric/odeint/stepper/runge_kutta_fehlberg78.hpp>
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
#include "teukolsky_double_double_cuda.cuh"
#include "teukolsky_source_cuda.cuh"

#include "examples.hpp"
#include "rsh.hpp"
#include "sph.hpp"

#include <thrust/device_vector.h>
#include "cuda_wrapper.cuh"
#include "odeint_thrust/thrust.hpp"
#include "pde_cuda_kernel.cuh"
#include "asset.hpp"

//void test_teukolsky(void);


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

  auto run_teukolsky_sourced = [&](const long long int s, const long long int beta, const long long int lm_source, const double a_over_M, const std::string &dir) {
    using namespace Eigen;
    using namespace boost::numeric::odeint;
    using namespace std::numbers;
    using std::array;
  
    typedef CudaTeukolskyScalarPDE Equation;
    typedef Equation::Param Param;
    typedef Equation::State State;

    const std::string temporary_dir = "asset/";
    // const std::string temporary_dir = "/media/hypermania/Drive_001/QuasiNormalModes/asset/";
    prepare_directory_for_output(dir);
    prepare_directory_for_output(temporary_dir);
    Asset::set_asset_path(temporary_dir);
  
    Param param;
    param.s = s;
    param.l_max = 5;
    param.M = 0.5;
    param.a = a_over_M * param.M;
    param.lambda = 0;

    param.rast_min = -500;
    param.rast_max = 1000;
    param.N = static_cast<long long int>((param.rast_max - param.rast_min) / 0.03);
    // param.ko_epsilon = (std::llabs(s) == 2) ? 0.7 : 0.3; // Choose 0.3 for s=-1 and 0.7 for s=-2
    param.ko_epsilon = 0.7;
    
    param.t_start = 0;
    param.t_end = 1000;
    param.t_interval = 0.5;
    param.delta_t = 0.01;

    save_param_for_Mathematica(param, dir);

    TeukolskySourceParam source_param;
    source_param.M = param.M;
    source_param.a = param.a;
    source_param.rast_min = param.rast_min;
    source_param.rast_max = param.rast_max;
    source_param.N = param.N;
    source_param.l_max = param.l_max;

    source_param.beta = beta;
    // source_param.lm = 0;
    // source_param.lm = (std::llabs(s) == 2) ? 8 : 3;  // Choose 3 for s=0,-1 and 8 for s=-2
    source_param.lm = lm_source;
    source_param.t_i = 10.0;
    source_param.r_i = 10.0;
    source_param.sigma = 0.5;
    source_param.A = 100.0;
    source_param.type = PowerLaw;
    
    prepare_directory_for_output(dir + "source/");
    save_param_for_Mathematica(source_param, dir + "source/");
    
    CudaTeukolskySource source(source_param);    
    Equation eqn(param);
    eqn.add_source = source;

    // auto stepper = runge_kutta_fehlberg78<State, double, State, double>();
    auto stepper = runge_kutta_dopri5<State, double, State, double>();

    const long long int rIdx = r_ast_to_i(param.rast_min, param.rast_max, param.N, 50.0);
    auto recorder = ThrustRecorder(rIdx, eqn.lm_size, eqn.grid_size);
    auto observer1 = DenseTransformAndRecordObserver(dir, recorder);
    std::vector<double> times;
    for(size_t i = 0; i <= 10; ++i){
      times.push_back(0.0 + 50.0 * i);
    }
    auto observer2 = ApproximateTimeObserver(dir, times);
    auto observer = ObserverPack(observer1, observer2);
  
    State state(2 * eqn.lm_size * eqn.grid_size);
    ArrayXcd state_eigen(state.size());
    state_eigen = 0;

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

  // run_teukolsky_sourced(-2, 0, 8, 0, "output/teukolsky_sourced_s_-2_beta_0_lm_8_a_0_test_30/");
  // run_teukolsky_sourced(2, 0, 8, 0, "output/teukolsky_sourced_s_2_beta_0_lm_8_a_0_test_500/");
  // return 0;
  
  // run_teukolsky_sourced(-1, 0, 3, 0, "output/teukolsky_sourced_s_-1_beta_0_lm_3_a_0/");
  // run_teukolsky_sourced(-1, 1, 3, 0, "output/teukolsky_sourced_s_-1_beta_1_lm_3_a_0/");
  // run_teukolsky_sourced(-1, 2, 3, 0, "output/teukolsky_sourced_s_-1_beta_2_lm_3_a_0/");
  
  // run_teukolsky_sourced(-1, 0, 8, 0, "output/teukolsky_sourced_s_-1_beta_0_lm_8_a_0/");
  // run_teukolsky_sourced(-1, 1, 8, 0, "output/teukolsky_sourced_s_-1_beta_1_lm_8_a_0/");
  // run_teukolsky_sourced(-1, 2, 8, 0, "output/teukolsky_sourced_s_-1_beta_2_lm_8_a_0/");

  // run_teukolsky_sourced(-1, 0, 15, 0, "output/teukolsky_sourced_s_-1_beta_0_lm_15_a_0/");
  // run_teukolsky_sourced(-1, 1, 15, 0, "output/teukolsky_sourced_s_-1_beta_1_lm_15_a_0/");
  // run_teukolsky_sourced(-1, 2, 15, 0, "output/teukolsky_sourced_s_-1_beta_2_lm_15_a_0/");
  
  // run_teukolsky_sourced(-1, 0, 3, 0.1, "output/teukolsky_sourced_s_-1_beta_0_lm_3_a_01/");
  // run_teukolsky_sourced(-1, 1, 3, 0.1, "output/teukolsky_sourced_s_-1_beta_1_lm_3_a_01/");
  // run_teukolsky_sourced(-1, 2, 3, 0.1, "output/teukolsky_sourced_s_-1_beta_2_lm_3_a_01/");
  
  // run_teukolsky_sourced(-1, 0, 8, 0.1, "output/teukolsky_sourced_s_-1_beta_0_lm_8_a_01/");
  // run_teukolsky_sourced(-1, 1, 8, 0.1, "output/teukolsky_sourced_s_-1_beta_1_lm_8_a_01/");
  // run_teukolsky_sourced(-1, 2, 8, 0.1, "output/teukolsky_sourced_s_-1_beta_2_lm_8_a_01/");

  // run_teukolsky_sourced(-1, 0, 3, 0.2, "output/teukolsky_sourced_s_-1_beta_0_lm_3_a_02/");
  // run_teukolsky_sourced(-1, 1, 3, 0.2, "output/teukolsky_sourced_s_-1_beta_1_lm_3_a_02/");
  // run_teukolsky_sourced(-1, 2, 3, 0.2, "output/teukolsky_sourced_s_-1_beta_2_lm_3_a_02/");
  
  // run_teukolsky_sourced(-1, 0, 8, 0.2, "output/teukolsky_sourced_s_-1_beta_0_lm_8_a_02/");
  // run_teukolsky_sourced(-1, 1, 8, 0.2, "output/teukolsky_sourced_s_-1_beta_1_lm_8_a_02/");
  // run_teukolsky_sourced(-1, 2, 8, 0.2, "output/teukolsky_sourced_s_-1_beta_2_lm_8_a_02/");

  // run_teukolsky_sourced(-1, 0, 3, 0.3, "output/teukolsky_sourced_s_-1_beta_0_lm_3_a_03/");
  // run_teukolsky_sourced(-1, 1, 3, 0.3, "output/teukolsky_sourced_s_-1_beta_1_lm_3_a_03/");
  // run_teukolsky_sourced(-1, 2, 3, 0.3, "output/teukolsky_sourced_s_-1_beta_2_lm_3_a_03/");
  
  // run_teukolsky_sourced(-1, 0, 8, 0.3, "output/teukolsky_sourced_s_-1_beta_0_lm_8_a_03/");
  // run_teukolsky_sourced(-1, 1, 8, 0.3, "output/teukolsky_sourced_s_-1_beta_1_lm_8_a_03/");
  // run_teukolsky_sourced(-1, 2, 8, 0.3, "output/teukolsky_sourced_s_-1_beta_2_lm_8_a_03/");

  // run_teukolsky_sourced(-1, 0, 3, 0.4, "output/teukolsky_sourced_s_-1_beta_0_lm_3_a_04/");
  // run_teukolsky_sourced(-1, 1, 3, 0.4, "output/teukolsky_sourced_s_-1_beta_1_lm_3_a_04/");
  // run_teukolsky_sourced(-1, 2, 3, 0.4, "output/teukolsky_sourced_s_-1_beta_2_lm_3_a_04/");
  
  // run_teukolsky_sourced(-1, 0, 8, 0.4, "output/teukolsky_sourced_s_-1_beta_0_lm_8_a_04/");
  // run_teukolsky_sourced(-1, 1, 8, 0.4, "output/teukolsky_sourced_s_-1_beta_1_lm_8_a_04/");
  // run_teukolsky_sourced(-1, 2, 8, 0.4, "output/teukolsky_sourced_s_-1_beta_2_lm_8_a_04/");

  // run_teukolsky_sourced(-1, 0, 3, 0.8, "output/teukolsky_sourced_s_-1_beta_0_lm_3_a_08/");
  // run_teukolsky_sourced(-1, 1, 3, 0.8, "output/teukolsky_sourced_s_-1_beta_1_lm_3_a_08/");
  // run_teukolsky_sourced(-1, 2, 3, 0.8, "output/teukolsky_sourced_s_-1_beta_2_lm_3_a_08/");
  
  // run_teukolsky_sourced(-1, 0, 8, 0.8, "output/teukolsky_sourced_s_-1_beta_0_lm_8_a_08/");
  // run_teukolsky_sourced(-1, 1, 8, 0.8, "output/teukolsky_sourced_s_-1_beta_1_lm_8_a_08/");
  // run_teukolsky_sourced(-1, 2, 8, 0.8, "output/teukolsky_sourced_s_-1_beta_2_lm_8_a_08/");



  // run_teukolsky_sourced(-2, 0, 3, 0, "output/teukolsky_sourced_s_-2_beta_0_lm_3_a_0/");
  // run_teukolsky_sourced(-2, 1, 3, 0, "output/teukolsky_sourced_s_-2_beta_1_lm_3_a_0/");
  // run_teukolsky_sourced(-2, 2, 3, 0, "output/teukolsky_sourced_s_-2_beta_2_lm_3_a_0/");
  
  // run_teukolsky_sourced(-2, 0, 8, 0, "output/teukolsky_sourced_s_-2_beta_0_lm_8_a_0/");
  // run_teukolsky_sourced(-2, 1, 8, 0, "output/teukolsky_sourced_s_-2_beta_1_lm_8_a_0/");
  // run_teukolsky_sourced(-2, 2, 8, 0, "output/teukolsky_sourced_s_-2_beta_2_lm_8_a_0/");

  // run_teukolsky_sourced(-2, 0, 15, 0, "output/teukolsky_sourced_s_-2_beta_0_lm_15_a_0/");
  // run_teukolsky_sourced(-2, 1, 15, 0, "output/teukolsky_sourced_s_-2_beta_1_lm_15_a_0/");
  // run_teukolsky_sourced(-2, 2, 15, 0, "output/teukolsky_sourced_s_-2_beta_2_lm_15_a_0/");
  
  // run_teukolsky_sourced(-2, 0, 3, 0.1, "output/teukolsky_sourced_s_-2_beta_0_lm_3_a_01/");
  // run_teukolsky_sourced(-2, 1, 3, 0.1, "output/teukolsky_sourced_s_-2_beta_1_lm_3_a_01/");
  // run_teukolsky_sourced(-2, 2, 3, 0.1, "output/teukolsky_sourced_s_-2_beta_2_lm_3_a_01/");
  
  // run_teukolsky_sourced(-2, 0, 8, 0.1, "output/teukolsky_sourced_s_-2_beta_0_lm_8_a_01/");
  // run_teukolsky_sourced(-2, 1, 8, 0.1, "output/teukolsky_sourced_s_-2_beta_1_lm_8_a_01/");
  // run_teukolsky_sourced(-2, 2, 8, 0.1, "output/teukolsky_sourced_s_-2_beta_2_lm_8_a_01/");

  // run_teukolsky_sourced(-2, 0, 3, 0.2, "output/teukolsky_sourced_s_-2_beta_0_lm_3_a_02/");
  // run_teukolsky_sourced(-2, 1, 3, 0.2, "output/teukolsky_sourced_s_-2_beta_1_lm_3_a_02/");
  // run_teukolsky_sourced(-2, 2, 3, 0.2, "output/teukolsky_sourced_s_-2_beta_2_lm_3_a_02/");
  
  // run_teukolsky_sourced(-2, 0, 8, 0.2, "output/teukolsky_sourced_s_-2_beta_0_lm_8_a_02/");
  // run_teukolsky_sourced(-2, 1, 8, 0.2, "output/teukolsky_sourced_s_-2_beta_1_lm_8_a_02/");
  // run_teukolsky_sourced(-2, 2, 8, 0.2, "output/teukolsky_sourced_s_-2_beta_2_lm_8_a_02/");

  // run_teukolsky_sourced(-2, 0, 3, 0.3, "output/teukolsky_sourced_s_-2_beta_0_lm_3_a_03/");
  // run_teukolsky_sourced(-2, 1, 3, 0.3, "output/teukolsky_sourced_s_-2_beta_1_lm_3_a_03/");
  // run_teukolsky_sourced(-2, 2, 3, 0.3, "output/teukolsky_sourced_s_-2_beta_2_lm_3_a_03/");
  
  // run_teukolsky_sourced(-2, 0, 8, 0.3, "output/teukolsky_sourced_s_-2_beta_0_lm_8_a_03/");
  // run_teukolsky_sourced(-2, 1, 8, 0.3, "output/teukolsky_sourced_s_-2_beta_1_lm_8_a_03/");
  // run_teukolsky_sourced(-2, 2, 8, 0.3, "output/teukolsky_sourced_s_-2_beta_2_lm_8_a_03/");

  // run_teukolsky_sourced(-2, 0, 3, 0.4, "output/teukolsky_sourced_s_-2_beta_0_lm_3_a_04/");
  // run_teukolsky_sourced(-2, 1, 3, 0.4, "output/teukolsky_sourced_s_-2_beta_1_lm_3_a_04/");
  // run_teukolsky_sourced(-2, 2, 3, 0.4, "output/teukolsky_sourced_s_-2_beta_2_lm_3_a_04/");
  
  // run_teukolsky_sourced(-2, 0, 8, 0.4, "output/teukolsky_sourced_s_-2_beta_0_lm_8_a_04/");
  // run_teukolsky_sourced(-2, 1, 8, 0.4, "output/teukolsky_sourced_s_-2_beta_1_lm_8_a_04/");
  // run_teukolsky_sourced(-2, 2, 8, 0.4, "output/teukolsky_sourced_s_-2_beta_2_lm_8_a_04/");

  // run_teukolsky_sourced(-2, 0, 8, 0.8, "output/teukolsky_sourced_s_-2_beta_0_lm_8_a_08/");
  // run_teukolsky_sourced(-2, 1, 8, 0.8, "output/teukolsky_sourced_s_-2_beta_1_lm_8_a_08/");
  // run_teukolsky_sourced(-2, 2, 8, 0.8, "output/teukolsky_sourced_s_-2_beta_2_lm_8_a_08/");

  // run_teukolsky_sourced(0, 0, 15, 0, "output/teukolsky_sourced_s_0_beta_0_lm_15_a_0/");
  // run_teukolsky_sourced(0, 1, 15, 0, "output/teukolsky_sourced_s_0_beta_1_lm_15_a_0/");
  // run_teukolsky_sourced(0, 2, 15, 0, "output/teukolsky_sourced_s_0_beta_2_lm_15_a_0/");
  

  
  // run_teukolsky_sourced(0, 0, 8, 0, "output/teukolsky_sourced_s_0_beta_0_lm_8_a_0/");
  // run_teukolsky_sourced(0, 1, 8, 0, "output/teukolsky_sourced_s_0_beta_1_lm_8_a_0/");
  // run_teukolsky_sourced(0, 2, 8, 0, "output/teukolsky_sourced_s_0_beta_2_lm_8_a_0/");
  
  // run_teukolsky_sourced(-1, 0, 8, 0, "output/teukolsky_sourced_s_-1_beta_0_lm_8_a_0/");
  // run_teukolsky_sourced(-1, 1, 8, 0, "output/teukolsky_sourced_s_-1_beta_1_lm_8_a_0/");
  // run_teukolsky_sourced(-1, 2, 8, 0, "output/teukolsky_sourced_s_-1_beta_2_lm_8_a_0/");
  
  // run_teukolsky_sourced(-2, 0, 8, 0, "output/teukolsky_sourced_s_-2_beta_0_lm_8_a_0/");
  // run_teukolsky_sourced(-2, 1, 8, 0, "output/teukolsky_sourced_s_-2_beta_1_lm_8_a_0/");
  // run_teukolsky_sourced(-2, 2, 8, 0, "output/teukolsky_sourced_s_-2_beta_2_lm_8_a_0/");
  
  // run_teukolsky_sourced(1, 0, 8, 0, "output/teukolsky_sourced_s_1_beta_0_lm_8_a_0/");
  // run_teukolsky_sourced(1, 1, 8, 0, "output/teukolsky_sourced_s_1_beta_1_lm_8_a_0/");
  // run_teukolsky_sourced(1, 2, 8, 0, "output/teukolsky_sourced_s_1_beta_2_lm_8_a_0/");
  
  // run_teukolsky_sourced(2, 0, 8, 0, "output/teukolsky_sourced_s_2_beta_0_lm_8_a_0/");
  // run_teukolsky_sourced(2, 1, 8, 0, "output/teukolsky_sourced_s_2_beta_1_lm_8_a_0/");
  // run_teukolsky_sourced(2, 2, 8, 0, "output/teukolsky_sourced_s_2_beta_2_lm_8_a_0/");

  // run_teukolsky_sourced(2, 2, 8, 0, "output/teukolsky_sourced_s_2_beta_2_lm_8_a_0_test/");
  // run_teukolsky_sourced(1, 2, 8, 0, "output/teukolsky_sourced_s_1_beta_2_lm_8_a_0_test/");

  // run_teukolsky_sourced(1, 0, 8, 0.001, "output/teukolsky_sourced_s_1_beta_0_lm_8_a_0001/");
  // run_teukolsky_sourced(1, 1, 8, 0.001, "output/teukolsky_sourced_s_1_beta_1_lm_8_a_0001/");
  // run_teukolsky_sourced(1, 2, 8, 0.001, "output/teukolsky_sourced_s_1_beta_2_lm_8_a_0001/");
  
  // run_teukolsky_sourced(2, 0, 8, 0.001, "output/teukolsky_sourced_s_2_beta_0_lm_8_a_0001/");
  // run_teukolsky_sourced(2, 1, 8, 0.001, "output/teukolsky_sourced_s_2_beta_1_lm_8_a_0001/");
  // run_teukolsky_sourced(2, 2, 8, 0.001, "output/teukolsky_sourced_s_2_beta_2_lm_8_a_0001/");
  

  auto run_teukolsky_dirac_delta = [&](const long long int s, const long long int lm_source, const double a_over_M, const std::string &dir) {
    using namespace Eigen;
    using namespace boost::numeric::odeint;
    using namespace std::numbers;
    using std::array;
  
    typedef CudaTeukolskyScalarPDE Equation;
    typedef Equation::Param Param;
    typedef Equation::State State;

    const std::string temporary_dir = "asset/";
    // const std::string temporary_dir = "/media/hypermania/Drive_001/QuasiNormalModes/asset/";
    prepare_directory_for_output(dir);
    prepare_directory_for_output(temporary_dir);
    Asset::set_asset_path(temporary_dir);
  
    Param param;
    param.s = s;
    param.l_max = 2;
    param.M = 0.5;
    param.a = a_over_M * param.M;
    param.lambda = 0;

    param.rast_min = -200;
    param.rast_max = 600;
    param.N = static_cast<long long int>((param.rast_max - param.rast_min) / 0.03);
    // param.ko_epsilon = (std::llabs(s) == 2) ? 0.7 : 0.3; // Choose 0.3 for s=-1 and 0.7 for s=-2
    param.ko_epsilon = 0.7;
    
    param.t_start = 0;
    param.t_end = 400;
    param.t_interval = 0.5;
    param.delta_t = 0.01;

    save_param_for_Mathematica(param, dir);

    TeukolskySourceParam source_param;
    source_param.M = param.M;
    source_param.a = param.a;
    source_param.rast_min = param.rast_min;
    source_param.rast_max = param.rast_max;
    source_param.N = param.N;
    source_param.l_max = param.l_max;

    // source_param.beta = beta;
    source_param.lm = lm_source;
    source_param.t_i = 10.0;
    source_param.r_i = 200.0;
    source_param.sigma = 0.5;
    source_param.A = 100.0;
    source_param.type = DiracDelta;
    
    prepare_directory_for_output(dir + "source/");
    save_param_for_Mathematica(source_param, dir + "source/");
    
    CudaTeukolskySource source(source_param);    
    Equation eqn(param);
    eqn.add_source = source;

    // auto stepper = runge_kutta_fehlberg78<State, double, State, double>();
    auto stepper = runge_kutta_dopri5<State, double, State, double>();

    const long long int rIdx = r_ast_to_i(param.rast_min, param.rast_max, param.N, 50.0);
    auto recorder = ThrustRecorder(rIdx, eqn.lm_size, eqn.grid_size);
    auto observer1 = DenseTransformAndRecordObserver(dir, recorder);
    std::vector<double> times;
    for(size_t i = 0; i <= 20; ++i){
      times.push_back(0.0 + 20.0 * i);
    }
    auto observer2 = ApproximateTimeObserver(dir, times);
    auto observer = ObserverPack(observer1, observer2);
  
    State state(2 * eqn.lm_size * eqn.grid_size);
    ArrayXcd state_eigen(state.size());
    state_eigen = 0;

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

  // run_teukolsky_dirac_delta(-1, 3, 0, "output/teukolsky_dirac_s_-1_lm_3_a_0/");
  // run_teukolsky_dirac_delta(-1, 8, 0, "output/teukolsky_dirac_s_-1_lm_8_a_0/");
  // run_teukolsky_dirac_delta(-1, 15, 0, "output/teukolsky_dirac_s_-1_lm_15_a_0/");
  // run_teukolsky_dirac_delta(-2, 8, 0, "output/teukolsky_dirac_s_-2_lm_8_a_0/");
  // run_teukolsky_dirac_delta(-2, 15, 0, "output/teukolsky_dirac_s_-2_lm_15_a_0/");
  
  // run_teukolsky_dirac_delta(1, 3, 0, "output/teukolsky_dirac_s_1_lm_3_a_0/");
  // run_teukolsky_dirac_delta(1, 8, 0, "output/teukolsky_dirac_s_1_lm_8_a_0/");
  // run_teukolsky_dirac_delta(1, 15, 0, "output/teukolsky_dirac_s_1_lm_15_a_0/");
  // run_teukolsky_dirac_delta(2, 8, 0, "output/teukolsky_dirac_s_2_lm_8_a_0/");
  // run_teukolsky_dirac_delta(2, 15, 0, "output/teukolsky_dirac_s_2_lm_15_a_0/");

  // run_teukolsky_dirac_delta(-2, 8, 0, "output/teukolsky_dirac_s_-2_lm_8_a_0/");
  // run_teukolsky_dirac_delta(2, 8, 0, "output/teukolsky_dirac_s_2_lm_8_a_0/");
  
  // return 0;

  
  auto run_teukolsky_cubic = [&](const long long int s, const double a_over_M, const double lambda, const double ko_epsilon, const std::string &dir) {
    using namespace Eigen;
    using namespace boost::numeric::odeint;
    using namespace std::numbers;
    using std::array;
  
    typedef CudaTeukolskyScalarPDE Equation;
    typedef Equation::Param Param;
    typedef Equation::State State;

    const std::string temporary_dir = "asset/";
    prepare_directory_for_output(dir);
    prepare_directory_for_output(temporary_dir);
    Asset::set_asset_path(temporary_dir);
  
    Param param;
    param.s = s;
    param.l_max = 5;
    param.M = 0.5;
    param.a = a_over_M * param.M;
    param.lambda = lambda;

    param.rast_min = -500;
    param.rast_max = 1000;
    param.N = static_cast<long long int>((param.rast_max - param.rast_min) / 0.03);
    param.ko_epsilon = ko_epsilon; // 0.5;
  
    param.t_start = 0;
    param.t_end = 1000;
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
      times.push_back(0.0 + 50.0 * i);
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

  run_teukolsky_cubic(0, 0.01, 0.1, 0, "output/teukolsky_a_001_lambda_01/");
  run_teukolsky_cubic(0, 0.9, 0.01, 0, "output/teukolsky_a_09_lambda_001/");
  
  // run_teukolsky_cubic(-1, 0.1, 0, 0.6, "output/teukolsky_s_1_a_01_lambda_0_eps_06/");
  // run_teukolsky_cubic(-1, 0.1, 0, 0.5, "output/teukolsky_s_1_a_01_lambda_0_eps_05/");
  // run_teukolsky_cubic(-1, 0.1, 0, 0.4, "output/teukolsky_s_1_a_01_lambda_0_eps_04/");
  // run_teukolsky_cubic(-1, 0.1, 0, 0.3, "output/teukolsky_s_1_a_01_lambda_0_eps_03/");
  // run_teukolsky_cubic(-1, 0.1, 0, 0.2, "output/teukolsky_s_1_a_01_lambda_0_eps_02/");
  
  // run_teukolsky_cubic(0, 0.01, 0.1, "output/teukolsky_a_001_lambda_01/");
  // run_teukolsky_cubic(0, 0.1, 0.001, "output/teukolsky_a_01_lambda_0001/");
  // run_teukolsky_cubic(0, 0.9, 0.001, "output/teukolsky_a_09_lambda_0001/");
  // run_teukolsky_cubic(0, 0.99, 0, "output/teukolsky_099/");
  // run_teukolsky_cubic(1, 0, 0, "output/teukolsky_s_1_a_0_lambda_0/");
  // run_teukolsky_cubic(1, 0.5, 0, "output/teukolsky_s_1_a_05_lambda_0/");
  // run_teukolsky_cubic(0, 0.1, 0, "output/teukolsky_s_0_a_01_lambda_0/");

  return 0;
}



/*
void test_teukolsky(void) {
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
*/
