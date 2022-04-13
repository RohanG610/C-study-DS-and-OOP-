#include<iostream>
using namespace std;
int minimumPerimeter (int area)
{
  int i,j,min,temp;
  min=2*(1+area);
  for(i=2;i<area;i++)
  {
    if(area%i==0)
    {
      j=area/i;
      temp=2*(i+j);
      if(temp<min)
      {
        min=temp;
      }
    }
  }
  return min;
}
int main()
{
    int area;
    cin>>area;
    cout<<"Minimum Perimeter will be "<<minimumPerimeter(area);
    return 0;
}
