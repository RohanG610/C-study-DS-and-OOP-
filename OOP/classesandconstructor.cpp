#include<iostream>
 using namespace std;
class A
{
  private: //it is default access specifier
  int a;
  public:
  A()
  {
   int a=0;
  }
  void setint(int x)
  {
    a=x;
  }
  void getint()
  {
    cout<<a;
  }
}; //Note: ";" is required, it is common mistake that people forgot
int main()
{
  A a1;//constructor gets called, assigning a to 0
  a1.setint(10);
  a1.getint();
}
