#pragma once
#include <array>
#include <algorithm>

class Atleta {
  std::string n;
  std::array<float,5> scs{};
  public:
    Atleta(std::string x, std::array<float,5>& y);
    float Media();
};
