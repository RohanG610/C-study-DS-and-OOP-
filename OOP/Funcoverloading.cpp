#include<iostream.h>
using namespace std;
class Classes{
  private:
  int x,y;
  public:
  //Fuction Overloading via Constructors
  Classes()
  {
    cout<<"No Coordinates"<<endl;
  }
  Classes(int a)
  {
    x=a;
    cout<<"x="<<x<<endl;
  }
  Classes(int a,int b)
  {
    x=a;y=b;
    cout<<"x="<<x<<", y="<<y<<endl;
  }
};
int main()
{
  Classes c1,c2(10,20),c3(10);
  return 0;
}
