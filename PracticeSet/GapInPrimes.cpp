#include <iostream>
#include <vector>
//To find neighbouring prime with difference of user define value
class GapInPrimes
{
public:
    static std::pair<long long, long long> gap(int g, long long m, long long n) {
      std::vector<long long> vec;
      for(long long i = m;i<n;i++)
      {
        int check = 0;
        for(long long j = 2;j<i/2;j++)
        {
          if(i%j==0)
          {
            check=1;
            break;
          }
        }
        if(check==0)
          vec.push_back(i);
      }
      for(int i=0;i<vec.size();i++)
      {
        for(int j=i+1;j<vec.size();j++)
        {
          if(vec[j]-vec[i]==g && j-i==1)
            return std::pair<long long,long long> {vec[i],vec[j]};
        }
      }
        return std::pair<long long,long long> {0, 0};
  }
};
int main()
{
    GapInPrimes gp;
    int g;
    long long m,n;
    std::cout<<"Enter the gap: ";std::cin>>g;
    std::cout<<"Enter the limit:\n";std::cin>>m>>n;
    std::pair<long long,long long> p = gp.gap(g,m,n);
    std::cout<<" ["<<p.first<<","<<p.second<<"]";
    return 0;
}
