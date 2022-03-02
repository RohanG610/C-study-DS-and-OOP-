#include<iostream>
using namespace std;
 
class Base
{
private:
    int x;
public:
    Base(int x1) { x = x1;}
    Base(const Base &b1) {x = b1.x;}//copy constructor
 
    int get(){  return x; }
};
 
int main()
{
    Base b1(10);
    Base b2 = b1; // Copy constructor is called
    cout << "b1.x = " << b1.get()<<endl;
    cout << "b2.x = " << b2.get();
 
    return 0;
}
//In C++, a Copy Constructor may be called in the following cases: 
//1. When an object of the class is returned by value. 
//2. When an object of the class is passed (to a function) by value as an argument. 
//3. When an object is constructed based on another object of the same class. 
//4. When the compiler generates a temporary object.
