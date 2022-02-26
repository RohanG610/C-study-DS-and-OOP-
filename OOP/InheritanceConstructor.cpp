#include<iostream>
#include<string>
using namespace std;

class People
{
  protected:
    string name;
    int age;
  public:
    People(string Name, int Age)
    {
      name = Name; age = Age;
    }
};
class Teacher : public People
{
  private:
    string subject,school;
  public:
    Teacher(string Name, int Age, string Subject, string School): People(Name,Age) //Calling People(Base Class) constructor in Teacher(Derived Class)
    {
      name = Name; age = Age; subject = Subject; school = School;
    }
    void print_info()
    {
      cout<<name<<endl<<age<<endl<<subject<<endl<<school;
    }
};
int main()
{
  Teacher t1 = Teacher("Walter White",50,"Chemistry","JP Wynne High School");//another way for intialization
  t1.print_info();
  return 0;
}
/*
Also note that order of constructor in inheritance
It goes from base to derived class;
If two or more base class are there then the order of inheritance( i.e public base1, public base2 ) deteremines which will get call first
/*/
