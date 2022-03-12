#include <iostream>
using namespace std;
 
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
    func(10);//top priority is given to int func, Thus int func is excuted
    func(10.0);//here as float is pass, it skips and ignores conversion and moves to template func
    return 0;
}
