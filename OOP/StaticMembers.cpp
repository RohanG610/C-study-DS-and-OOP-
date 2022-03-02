#include<iostream>
#include<string>
using namespace std;

//static class member is associated with class not the object
/*
Advantages of using Class static Members:
1)static members is in scope of the class, thereby avoiding same name of global and meber of another class
2)Encapsulation can be enforced as static class member can be private, which global can't.
*/
class Account
{
    private:
        string owner;
        double amount;
        static const int minAmount=0;//const should alway intialize inside class
        static double interestRate;
    public:
        void applyint(){ amount+=amount*interestRate;}//can access both static and non static members
        static double rate(){ return interestRate;}//only access to static members
        static void rate(double);
        static void minA(){cout<<"Minimum amount is  "<<minAmount<<endl;}
};
double Account::interestRate = 0.05;//Static member should be intialization atleast once outside the class cause counstructor can't intialize it.
void Account::rate(double newRate)//only access to static members
{
    interestRate = newRate;
}
int main()
{
    Account ac1;
    Account *ac2 = &ac1;
    double rate;
    rate = ac1.rate();
    rate = ac2->rate();
    rate = Account::rate();
    cout<<rate;
    Account::minA();
    return 0;
}
/*
Use of static data member is given following:
1)It can use to make object of current class.ex
class Bar
{
    private:
        static Bar mem1; //ok
        Bar *mem2; //ok
        Bar mem3; //error
};
2)It can used as deafault argument:
class Screen
{
        private:
            static const char bkground = '#';
        public:
            Screen& clear(char = background)
};
*/
