#ifndef ASSET_HPP
#define ASSET_HPP
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

#include "io.hpp"

namespace Asset {
  extern std::string asset_path;
  void set_asset_path(const std::string &);
  // void save_asset(const std::string &key, const std::vector<EigenObject> &obj);
  // void load_asset(const std::string &key, const std::vector<EigenObject> &obj);

  template<typename... Ts>
  std::string to_hashed_filename(const std::string &header, const Ts... args)
  {
    std::stringstream ss;
    ss.precision(std::numeric_limits<double>::max_digits10);
    ss << header;
    auto append = [&](auto val)->void{
      ss << "#" << val;
    };
    (append(args),...);
    // Example:
    // ss << "#" << rast_min << "#" << rast_max << "#" << N << "#" << M << "#" << a;
    // std::cout << "code string = " << ss.str() << std::endl;
    const std::size_t hashed = std::hash<std::string>{}(ss.str());
    const std::string filename = Asset::asset_path + std::to_string(hashed) + ".dat";
    return filename;
  }

}

#endif
