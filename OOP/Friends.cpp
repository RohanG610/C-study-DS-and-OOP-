#include<iostream>
using namespace std;
//Note: friend class, function can be declared in private or public as it is not part of object.
class Base
{
    private:
        int a;
    public:
        Base(int x=0){ a = x;}
        friend int FriendFunc(Base base);//Friend Function
        friend class FriendClass;//Friend class
};
int FriendFunc(Base base)
{
    return base.a;//have access to all members
}
class FriendClass
{
    private:
        int b;
    public:
        FriendClass(Base base)
        {
            b = base.a;
        }
        void display(){ cout<<"b="<<b; }
};
int main()
{
    Base b1(10);
    cout<<FriendFunc(b1)<<endl;
    FriendClass f1(b1);
    f1.display();
}
