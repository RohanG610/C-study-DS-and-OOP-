#include <iostream>
#include <string>
#include <sstream>

std::string find_screen_height(int width, const std::string &ratio)
{
  int num1=0,num2=0,i,j,n2;
  std::string first,sec;
  for(i=0;i<ratio.length();i++)
  {
    if(ratio[i]==':')
    {
      for(j=0;j<i;j++)
      {
        first+=ratio[j];
      }
      for(j=i+1;j<ratio.length();j++)
      {
        sec+=ratio[j];
      }
    }
  }
  std::stringstream first1(first),sec2(sec);
  first1>>num1;
  sec2>>num2;
  n2=(width*num2)/num1;
  std::ostringstream str1;
  str1<<width<<"x"<<n2;
  std::string laststr=str1.str();
    return laststr;
}
int main()
{
    std::string result = find_screen_height(1250,"3:4");
    std::cout<<result;
    return 0;
}
