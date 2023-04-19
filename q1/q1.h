#pragma once
#include <math.h>

struct Comodo{
  private:
    int t;
    float w, h, area;
  public:
    Comodo(int x, float y, float z);
    float CalculaArea();    
    float Lampada();
};
