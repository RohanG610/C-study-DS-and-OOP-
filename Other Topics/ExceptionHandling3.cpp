#include<iostream>
#include<string>
using namespace std;
void func(int a, int b) throw(int , int)
{
    if(b<=0)
    {
         throw b;
    }
    else
    {
        cout<<(float)a/b;
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    try
    {
        func(a,b);
    }
    catch(...)
    {
        cout<<"There is an error.";
    }
    return 0;
}
