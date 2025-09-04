#include "asset.hpp"


namespace Asset {
  
  std::string asset_path;

  void set_asset_path(const std::string &str) {
    asset_path = str;
  }
  
}
