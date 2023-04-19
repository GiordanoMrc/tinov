#include <iostream>
#include <stdlib.h>
#include "q1.h"

int main(){
  int tc = 0;
  float w{0},h{0};
  do{
    std::cin >> tc;
    if (tc == -1) return 0;
    std::cin >> w >> h;
    Comodo c(tc,w,h);
  } while (true);
  return 1;
}
