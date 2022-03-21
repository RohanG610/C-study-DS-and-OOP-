#include<iostream>
using namespace std;
class Base
{
    public:
        Base(){cout<<"base object has been created"<<endl;}
        virtual ~Base(){cout<<"base object has been destroyed"<<endl;}
};
class Derived:public Base
{
    public:
        Derived(){cout<<"derived object has been created"<<endl;}
        ~Derived(){cout<<"derived object has been destroyed"<<endl;} 
};
int main()
{
    Base *b1 = new Derived();
    delete b1;
    return 0;
}
/*
When we point to derived class using base class, we might not call the destructor of derived class
to help that we make virtual destructor of base class
*/
