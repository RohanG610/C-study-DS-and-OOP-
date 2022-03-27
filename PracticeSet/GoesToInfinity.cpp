#include<cmath>
#include<iostream>
using namespace std;

double solve(double m)
{
  double n=m,a;
  a=(((2*n)+1)-sqrt(1+(4*n)))/(2*n);
  return a;
}
int main()
{
    double d1 = solve(2);
    cout<<d1;
    return 0;
}
