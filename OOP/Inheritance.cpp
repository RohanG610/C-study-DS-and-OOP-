#include<iostream>
#include<string>
using namespace std;

class Vehicle
{
  protected:
    int no_of_wheels;
    string company_name;
  public:
    void setBasics(int no, string com)
    {
      no_of_wheels = no;
      company_name = com;
    }
};
class Car:public Vehicle
{
  private:
    int no_of_seats;
    string type_of_fuel;
  public:
    void setCar(int no, string type)
    {
      no_of_seats = no;
      type_of_fuel = type;
    }
    void print_Info()
    {
      cout<<"Car Company: "<<company_name<<"\nNumber of Wheels: "<<no_of_wheels<<"\nNumber of Seats: "<<no_of_seats<<"\nType of Fuel: "<<type_of_fuel<<endl;
    }
};
class Bike:public Vehicle
{
private:
  string type;
public:
  void setBike(string t)
  {
  type = t;
  }
  void print_Info()
  {
  cout<<"Bike Company: "<<company_name<<"\nNumber of Wheels: "<<no_of_wheels<<"\nType: "<<type<<endl;
  }
};
int main()
{
  Bike b1;
  b1.setBasics(4,"BMW");
  b1.setBike("Quad");
  b1.print_Info();
  Car c1;
  c1.setBasics(3,"Blue Car-1972 Reliant Regal Supervan III");
  c1.setCar(4,"Diesel");
  c1.print_Info();
  return 0;
}
/*
When we inherit public-ly, it inherites as same;
When we inherit protected-ly, it inherites public as protected and rest is same;
When we inherit private-ly, it inherites all access specifier as private;
By default inheritance is private
*/
