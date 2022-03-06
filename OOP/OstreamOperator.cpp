#include<iostream>
using namespace std;
/*
To be consistent with IO library, the operator should take an ostream& as its first parameters and a reference to a const object of the class type as its second.
The operator should return a reference to its ostream parameter.
ostream isn't const because writing to the stream changes its state. The parameter is a reference because we can't copy an ostream object.
The second parameter ordinaruly should be a const reference to the class type we want to print, because printing an object should not change it.
IO operators must be nonmembers functions, because we need left side operator to be ostream not class.
*/
class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
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

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x+y;
    cout<<z<<endl;
}
