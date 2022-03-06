#include<iostream>
using namespace std;

class Complex
{
public:
    int a,b;
};
Complex operator +(const Complex c1,const Complex c2)
{
    Complex sum;
    sum.a = c1.a + c2.a;
    sum.b = c1.b + c2.b;
    return sum; 
}
ostream& operator <<(ostream &os,const Complex c)
{
    os<<c.a<<"+i"<<c.b;
    return os;
}
istream& operator >>(istream& in, Complex &c) // Note the reference in complex c, it is because we wnat to put value in current complex
{
    in>>c.a>>c.b;
    if(in)
        cout<<"a = " <<c.a <<" b = "<<c.b<<endl;
    else
        c = Complex();
    return in;
}
int main()
{
    Complex x,y;
    string s1,s2;
    cin>>x;
    cin>>y;
    Complex z;
    z = x+y;
    cout<<z<<endl;
}
