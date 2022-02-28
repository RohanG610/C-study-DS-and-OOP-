#include<iostream>
using namespace std;
class Base
{
    public:
    Base(){cout<<"Base is created"<<endl;}
    ~Base(){cout<<"Base is Destroyed"<<endl;}
};
class Derived: public Base
{
    public:
    Derived(){cout<<"Derived class is created"<<endl;}
    ~Derived(){cout<<"Derived class is Destroyed"<<endl;}
};
int main()
{
    Derived d1;
    return 0;
}
