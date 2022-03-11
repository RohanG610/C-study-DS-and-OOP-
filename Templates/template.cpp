#include<iostream>
using namespace std;

template<class T1,class T2>//Multiple Parameters Template

double avg(T1 a,T2 b)
{
    return a+b/2.0;
}

int main()
{
    int a;
    float b;
    cin>>a>>b;
    cout<<avg(a,b)<<endl;
    return 0;
}
