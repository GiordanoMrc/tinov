#pragma once
#include <math.h>

typedef struct Comodo {
  private:
    int t;
    float w, h, area;
  public:
    Comodo(int x, float y, float z):t(x),w(y),h(z){
      CalculaArea();
      std::cout << Lampada() << std::endl;
    }
    float CalculaArea(){
      area = (w*h);
      return area; 
    }
    float Lampada(){
      float pot{0};
      switch(t){
        case 0:
          pot = 12;
          break;
        case 1:
          pot = 15;
          break;
        case 2:
          pot = 18;
          break;
        case 3:
          pot = 20;
          break;
        case 4:
          pot = 22;
          break;
      }
      return ceil((pot*area)/60);
    }
} Comodo;
