#include <iostream>
#include <fstream>
#include <stdlib.h>

int main() {
  char c{'1'};
  std::ofstream fo;
  std::ifstream fi;
  fo.open("arq.txt", std::fstream::app);
  while(true) 
  {
    std::cin >> c;
    if (c == '0') break;
    fo << c;
  }
  fo.close();
  fi.open("arq.txt", std::fstream::app);
  if (fi.is_open()){
    while(fi >> std::noskipws >> c){
      printf("%c",c);
    }
  }
  fi.close();
  return 3;
}
