#include <iostream>
#include <string>

using namespace std;

int value(char roman)
{
  int result;
  if(roman=='I')
    result=1;
  if(roman=='V')
    result=5;
  if(roman=='X')
    result=10;
  if(roman=='L')
    result=50;
  if(roman=='C')
    result=100;
  if(roman=='D')
    result=500;
  if(roman=='M')
    result=1000;
  return result;
}
int solution(string roman) {
  int result=0;
  for(int i=0;i<roman.length();i++)
  {
    int s1 = value(roman[i]);
    if(i+1<roman.length())
    {
      int s2 = value(roman[i+1]);
      if(s1>=s2)
      {
        result+=s1;
      }
      else
      {
        result+=s2-s1;
        i++;
      }
    }
    else
    {
      result+=s1;
    }
  }
  return result;
}
int main()
{
    string s;
    cout<<"Enter Roman In Captial Letter: ";
    getline(cin,s);
    int result = solution(s);
    cout<<"In decimal form it is ";
    cout<<result;
    return 0;
}
