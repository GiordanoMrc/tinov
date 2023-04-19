#include <iostream>
#include <stdlib.h>
#include "q2.h"

Atleta::Atleta(std::string x, std::array<float,5>& y):n(x),scs(y)
{
  printf("Primeiro Salto: %.1f m\n", scs.at(0));
  printf("Segundo Salto: %.1f m\n", scs.at(1));
  printf("Terceiro Salto: %.1f m\n", scs.at(2));
  printf("Quarto Salto: %.1f m\n", scs.at(3));
  printf("Quinto Salto: %.1f m\n\n\n", scs.at(4));
  std::sort(scs.begin(),scs.end(),std::greater<float>());
  float m = Media();
  printf("Melhor Salto: %.1f m\n", scs.at(0));
  printf("Pior Salto: %.1f m\n", scs.at(4));
  printf("Media dos demais saltos: %.1f m\n\n\n", m);
  printf("Resultado Final:\n%s:%.1f m\n\n",n.c_str(), m);
}

float Atleta::Media()
{
  float m{};
  int i;
  for(i = 1; i<4; i++){
    m += scs[i];
  }
  return m/(i-1);
}

int main() {
  std::string nome;
  std::array<float,5> scores{};
  float aux;
  while(true){
    std::cin >> nome;
    if (nome.size()<2) return 0;
    for(int i=0;i<5;i++){
      std::cin >> aux;
      scores[i] = aux;
    }
    Atleta a(nome,scores);
  }
  return 2;
}
