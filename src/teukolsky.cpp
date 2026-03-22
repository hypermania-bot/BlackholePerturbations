#include "teukolsky.hpp"

#include <thread>
#include <boost/lockfree/queue.hpp>

#include "teukolsky.gen"
#include "io.hpp"
#include "asset.hpp"
#include "utility.hpp"

namespace Teukolsky
{
  // std::vector<std::vector<std::pair<long long int, long long int>>>
  // CouplingInfo make_coupling_info_map(const CouplingInfoFlat &info, const long long int l_max)
  CouplingInfo make_coupling_info_map(const CouplingInfoFlat &info, const long long int s, const long long int l_max) {
    const long long int lm_size = (l_max + 1) * (l_max + 1);
    const long long int s_max = 2;
    CouplingInfo result;
    result.resize(lm_size);
    for(int idx = 0; idx < lm_size; ++idx){
      for(auto p : info[s-(-s_max)][idx]){
	auto [idx1, coeff1] = p;
	if(idx1 < lm_size){
	  result[idx][idx1] = coeff1;
	}
      }
    }
    return result;
  }

  HighPrecisionVector compute_hp_r_vector(const HighPrecisionScalar rast_min, const HighPrecisionScalar rast_max, const long long int N, const HighPrecisionScalar M, const HighPrecisionScalar a) {
    // using boost::multiprecision::cpp_bin_float_100;
    // using boost::math::lambert_w0;
    // typedef boost::multiprecision::cpp_bin_float_100 HighPrecisionScalar;
    HighPrecisionScalar rast_min_hp = static_cast<HighPrecisionScalar>(rast_min);
    HighPrecisionScalar rast_max_hp = static_cast<HighPrecisionScalar>(rast_max);
    HighPrecisionScalar M_hp = static_cast<HighPrecisionScalar>(M);
    HighPrecisionScalar a_hp = static_cast<HighPrecisionScalar>(a);
    HighPrecisionScalar r_minus_hp = M_hp - sqrt(pow(M_hp, 2) - pow(a_hp, 2));
    HighPrecisionScalar r_plus_hp = M_hp + sqrt(pow(M_hp, 2) - pow(a_hp, 2));
    HighPrecisionScalar h_hp = (rast_max_hp - rast_min_hp) / (N - 1);
    HighPrecisionVector r(N + 1);

    
    boost::lockfree::queue<int> q(10);
    for(int i = 0; i < r.size(); i++){
      q.push(i);
    }

    
    // auto bisect_thread = [&](void){
    //   size_t idx;
    //   while(q.pop(idx)){
    // 	const HighPrecisionScalar r_ast_hp = rast_min_hp + idx * h_hp - h_hp / HighPrecisionScalar(2);

    // 	auto r_to_rast =
    // 	  [&](HighPrecisionScalar r_hp) -> HighPrecisionScalar {
    // 	    return - r_ast_hp + r_hp
    // 	      + (r_plus_hp * r_plus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_plus_hp)
    // 	      - (r_minus_hp * r_minus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_minus_hp);
    // 	  };

    // 	std::uintmax_t it = 1000;
    // 	boost::math::tools::eps_tolerance<HighPrecisionScalar> tol(100);
    // 	std::pair<HighPrecisionScalar,HighPrecisionScalar> result = boost::math::tools::bisect(r_to_rast, r_plus_hp, rast_max_hp, tol, it);
    
    // 	HighPrecisionScalar r_hp = (result.first + result.second) / 2;
    
    // 	r[idx] = r_hp;
    //   }
    // };
    
    // auto newton_thread = [&](void){
    //   HighPrecisionScalar last_guess = HighPrecisionScalar("1.000000000000000001") * r_plus_hp;
    //   size_t idx;
    //   while(q.pop(idx)){
    // 	std::cout << "new number" << std::endl;
    // 	const HighPrecisionScalar r_ast_hp = rast_min_hp + idx * h_hp - h_hp / HighPrecisionScalar(2);

    // 	auto r_to_rast =
    // 	  [&](HighPrecisionScalar r_hp) -> std::pair<HighPrecisionScalar,HighPrecisionScalar> {
    // 	  HighPrecisionScalar val = - r_ast_hp + r_hp
    // 	  + (r_plus_hp * r_plus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_plus_hp)
    // 	  - (r_minus_hp * r_minus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_minus_hp);
    // 	  HighPrecisionScalar deriv = (a_hp * a_hp + r_hp * r_hp) / (r_hp * r_hp - 2 * M_hp * r_hp + a_hp * a_hp);
    // 	  std::cout << std::fixed << std::setprecision(100) << std::left;
    // 	  std::cout << "r_hp = " << r_hp << std::endl;
    // 	  return std::make_pair(val, deriv);
    // 	};

    // 	std::uintmax_t it = 1000;
    // 	boost::math::tools::eps_tolerance<HighPrecisionScalar> tol(100);
    // 	const int digits = std::numeric_limits<HighPrecisionScalar>::digits;  // Maximum possible binary digits accuracy for type T.
    // 	int get_digits = 332;
	
    // 	HighPrecisionScalar guess = last_guess;
    // 	HighPrecisionScalar r_hp = boost::math::tools::newton_raphson_iterate(r_to_rast, guess, r_plus_hp, rast_max_hp, get_digits, it);
    // 	last_guess = r_hp;
    
    // 	r[idx] = r_hp;
    //   }
    // };

    auto shroder_thread = [&](void){
      HighPrecisionScalar last_guess = HighPrecisionScalar("1.0000000000000001") * r_plus_hp;
      size_t idx;
      while(q.pop(idx)){
	const HighPrecisionScalar r_ast_hp = rast_min_hp + idx * h_hp - h_hp / HighPrecisionScalar(2);

	auto r_to_rast =
	  [&](HighPrecisionScalar r_hp) -> std::tuple<HighPrecisionScalar,HighPrecisionScalar,HighPrecisionScalar> {
	  HighPrecisionScalar val = - r_ast_hp + r_hp
	  + (r_plus_hp * r_plus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_plus_hp)
	  - (r_minus_hp * r_minus_hp + a_hp * a_hp) / (r_plus_hp - r_minus_hp) * log(r_hp - r_minus_hp);
	  HighPrecisionScalar deriv = (a_hp * a_hp + r_hp * r_hp) / (r_hp * r_hp - 2 * M_hp * r_hp + a_hp * a_hp);
	  HighPrecisionScalar double_deriv = (2 * M_hp * (a_hp * a_hp - r_hp * r_hp)) / pow(r_hp * r_hp - 2 * M_hp * r_hp + a_hp * a_hp, 2);
	  return std::make_tuple(val, deriv, double_deriv);
	};

	std::uintmax_t it = 1000;
	int get_digits = 2000;
	
	HighPrecisionScalar guess = last_guess;
	HighPrecisionScalar r_hp = boost::math::tools::halley_iterate(r_to_rast, guess, r_plus_hp, rast_max_hp, get_digits, it);
	last_guess = r_hp;
    
	r[idx] = r_hp;
      }
    };
    
    size_t num_threads = std::thread::hardware_concurrency() / 2;
    auto threads = std::vector<std::thread>(0);
    for(size_t i = 0; i < num_threads; ++i){
      threads.push_back(std::thread(shroder_thread));
    }

    for(size_t i = 0; i < num_threads; ++i){
      if(threads[i].joinable()){
	threads[i].join();
      }
    }
    
    return r;
  }

  Vector compute_r_vector(const Scalar rast_min, const Scalar rast_max, const long long int N, const Scalar M, const Scalar a) {
    return compute_hp_r_vector(static_cast<HighPrecisionScalar>(rast_min),
			       static_cast<HighPrecisionScalar>(rast_max),
			       N,
			       static_cast<HighPrecisionScalar>(M),
			       static_cast<HighPrecisionScalar>(a)).cast<double>();
  }
  
  void prepare_coeffs_scalar(std::vector<ComplexVector> &coeffs, const Scalar rast_min, const Scalar rast_max, const long long int N, const Scalar M, const Scalar a) {
    auto a_hp = static_cast<HighPrecisionScalar>(a);
    auto M_hp = static_cast<HighPrecisionScalar>(M);
    auto rast_min_hp = static_cast<HighPrecisionScalar>(rast_min);
    auto rast_max_hp = static_cast<HighPrecisionScalar>(rast_max);

    
    std::vector<ComplexVector> coeffs_temp;
    
    // Try loading coeffs from file
    const std::string filename = Asset::to_hashed_filename("coeffs", rast_min, rast_max, N, M, a);
    
    auto loaded = read_from_file<ComplexVector>(filename);
    if(loaded.has_value()) {
      const size_t num_segments = loaded->size() / (N+1);
      coeffs_temp.resize(num_segments);
      for(size_t i = 0; i < num_segments; ++i) {
	coeffs_temp[i] = (*loaded)(Eigen::seqN((N+1)*i, N+1));
      }
    } else {
      // Try loading r_hp (apparently Teukolsky::HighPrecisionComplex is trivially copyable)
      // assert(std::is_trivially_copyable<Teukolsky::HighPrecisionComplex>::value && "Teukolsky::HighPrecisionComplex is not trivially copyable");
      // assert(std::is_trivially_copyable<Teukolsky::HighPrecisionScalar>::value && "Teukolsky::HighPrecisionScalar is not trivially copyable");
      const std::string r_hp_filename = Asset::to_hashed_filename("r_hp", rast_min, rast_max, N, M, a);
      auto r_hp_loaded = read_from_file<Teukolsky::HighPrecisionVector>(r_hp_filename);
      Teukolsky::HighPrecisionVector r_hp;
      if(r_hp_loaded.has_value()){
	r_hp = *r_hp_loaded;
      } else {
	run_and_measure_time("Computing r_hp", [&](void){
	  r_hp = compute_hp_r_vector(rast_min_hp, rast_max_hp, N, M_hp, a_hp);
	});
	write_to_file(r_hp, r_hp_filename);
      }
      
      run_and_measure_time("Computing coeffs_temp", [&](void){
	coeffs_temp = compute_coeffs_scalar(a_hp, M_hp, r_hp);
      });
      ComplexVector to_save(coeffs_temp.size() * (N+1));
      for(size_t i = 0; i < coeffs_temp.size(); ++i) {
	to_save(Eigen::seqN((N+1)*i, N+1)) = coeffs_temp[i];
      }
      write_to_file(to_save, filename);
    }

    // Commit coeffs
    coeffs.resize(coeffs_temp.size());
    for(size_t i = 0; i < coeffs.size(); ++i) {
      // Don't change this to coeffs[i].swap(coeffs_temp[i])!
      // Copying the contents is a workaround for compatibility between .cpp and .cu binaries
      coeffs[i] = coeffs_temp[i];
    }

 
  }

  void prepare_r_beta(Vector &r_beta, const Scalar rast_min, const Scalar rast_max, const long long int N, const Scalar M, const Scalar a, const long long int beta) {
    auto a_hp = static_cast<HighPrecisionScalar>(a);
    auto M_hp = static_cast<HighPrecisionScalar>(M);
    auto rast_min_hp = static_cast<HighPrecisionScalar>(rast_min);
    auto rast_max_hp = static_cast<HighPrecisionScalar>(rast_max);

    const std::string r_hp_filename = Asset::to_hashed_filename("r_hp", rast_min, rast_max, N, M, a);
    auto r_hp_loaded = read_from_file<Teukolsky::HighPrecisionVector>(r_hp_filename);
    Teukolsky::HighPrecisionVector r_hp;
    if(r_hp_loaded.has_value()){
      r_hp = *r_hp_loaded;
    } else {
      run_and_measure_time("Computing r_hp", [&](void){
	r_hp = compute_hp_r_vector(rast_min_hp, rast_max_hp, N, M_hp, a_hp);
      });
      write_to_file(r_hp, r_hp_filename);
    }

    r_beta = r_hp.pow(-beta).cast<double>();
    
  }
  
}
