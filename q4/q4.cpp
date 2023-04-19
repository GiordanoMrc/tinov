#include <iostream>
#include <algorithm>

void bsort(std::array<int,8>& v)
{
  bool swp;
  for(int i=0;i<v.size()-1; i++)
  {
    swp = false;
    for(int j=0; j<v.size()-1-i; j++)
    {
      if(v[j]>v[j+1]){
        std::swap(v[j],v[j+1]);
        swp = true;
      }
    }
    if(!swp)
      break;
  }
}

int main()
{
  std::array<int,8> v{5,3,2,4,7,1,0,6};
  bsort(v);
  for(auto e:v){
    std::cout << e;
    if(e != v.back())
      std::cout<<", ";
  }
  return 4;
}
