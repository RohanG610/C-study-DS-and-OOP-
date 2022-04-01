#include<iostream>
#include<math.h> 
long solve(long n){  
    long addup=1;
    long sq = 1;
    for(;addup<10000000;addup++)
    {
      sq = addup*addup;
      long temp = sq+n;
      if(ceil((double)sqrt(temp)) == floor((double)sqrt(temp)))
      {
        return sq;
      }
    }
    return -1;
}
int main(){
    long n;
    std::cin>>n;
    std::cout<<solve(n);
    return 0;
}
