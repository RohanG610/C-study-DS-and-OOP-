#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person
{
    protected:
    string name;
    int age;  
    public:
    virtual void getdata()
    {
        cout<<"virtual";
    }
    virtual void putdata()
    {
        cout<<"virtual";
    }
};
class Professor:public Person
{
    private:
    int publications;
    static int cur_id;
    public:
    void getdata()
    {
        cin>>name;
        cin>>age>>publications;
    }
    void putdata()
    {
        cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<endl;
        cur_id++;
    }
};
int Professor::cur_id=1;
class Student: public Person
{
    private:
    int marks[6];
    static int cur_id;
    public:
    void getdata()
    {
        cin>>name;
        cin>>age;
        for(int i =0;i<6;i++)
        {
            cin>>marks[i];
        }
    }
    void putdata()
    {
        cout<<name<<" "<<age;
        int sum=0;
        for(int i=0;i<6;i++)
        {
            sum+=marks[i];
        }
        cout<<" "<<sum<<" "<<cur_id<<endl;
        cur_id++;
    }
};
int Student::cur_id=1;
int main(){

    int n, val;
    cin>>n;
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            per[i] = new Professor;

        }
        else per[i] = new Student;

        per[i]->getdata();

    }

    for(int i=0;i<n;i++)
        per[i]->putdata();

    return 0;
}
/*
Data Abstraction means hiding of usability of feature program. For example, in phone for clicking photo we only press button, but
in Reality it follows very complex algorithm which is handle by phone manufacturers.
It is mostly achevied by our classes and header files via not showing detailed code
Virtual Function is function that is declared in base class and re-define(overridden) in derived class. It achieves Runtime Polymorphism
Pure Virtual Function is functions which is necessary to be define in derived class. It syntax is virtual data_type name() = 0; Any one existence of pure virtual function can
make class Abstract
*/
