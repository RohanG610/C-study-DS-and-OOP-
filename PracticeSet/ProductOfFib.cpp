#include <iostream>
#include <vector>
typedef unsigned long long ull;

static std::vector<ull> productFib(ull prod)
{
  ull first=0,second=1;
  while(true)
  {
      if(prod==first*second)
          return {first,second,true};
      else if(prod<first*second)
          return {first,second,false};
      int temp;
      temp = second;
      second +=first;
      first = temp;
  }
  return {0};
}
int main()
{
  ull n;
  std::cout<<"Enter a number: ";
  std::cin>>n;
  std::vector<ull> v = productFib(n);
  if(v[2]==1)
    std::cout<<"Perfect Match Found: {"<<v[0]<<" "<<v[1]<<"}\n";
  else if(v[2]==0)
    std::cout<<"Not Perfect Match Found: {"<<v[0]<<" "<<v[1]<<"}\n";
}
