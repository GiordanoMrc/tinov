#include <iostream>
#include <stdlib.h>
#include "q1.h"

float Comodo::CalculaArea(){
  area = (w*h);
  return area; 
}

float Comodo::Lampada(){
  float pot;
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

Comodo::Comodo(int x, float y, float z):t(x),w(y),h(z){
  CalculaArea();
  std::cout << Lampada() << std::endl;
}

int main(){
  int tc = 0;
  float w{0},h{0};
  do{
    std::cin >> tc;
    switch(tc){
      case 0: case 1: case 2: case 3: case 4:
        break;
      default:
        return 0;
    }
    std::cin >> w >> h;
    Comodo c(tc,w,h);
  } while (true);
  return 1;
}
