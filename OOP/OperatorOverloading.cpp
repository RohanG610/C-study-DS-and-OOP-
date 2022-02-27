#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Job
{
    private:
        float sal;
    public:
        void get_info()
        {
            cout<<"Enter Salary: ";
            cin>>sal;
        }
        void print_info()
        {
            cout<<"Your Salary is "<<sal<<endl;
        }
        friend class Total;
};
class Investing
{
    private:
        int no_of_house;
        vector<int> rent;
        int total;
    public:
        Investing()
        {
            total=0;
        }
        void get_info()
        {
            cout<<"Enter Number of house you own: ";
            cin>>no_of_house;
            cout<<"Enter Rent that you get from house:\n";
            for(int i=0;i<no_of_house;i++)
            {
                int HouseRent;
                cin>>HouseRent;
                rent.push_back(HouseRent);
                total+=HouseRent;
            }
        }
        void print_info()
        {
            cout<<"Money that you get from " <<no_of_house<<" house/s is "<<total<<endl;
        }
        friend class Total;
};
class MonthlyExpense
{
    private:
        int expense;
    public:
        MonthlyExpense(){expense = 0;}
        void get_expense()
        {
            cout<<"Write the Monthly Expense: ";
            cin>>expense;
        }
        void print_expense()
        {
            cout<<"The Monthly Expense are: "<<expense<<endl;
        }
        friend class Total;
};
class Total
{
    private:
        int totalIncome;
    public:
        Total(){totalIncome=0;}
        int operator+=(Investing i)
        {
            totalIncome+=i.total;
        } 
        int operator+=(Job j)
        {
            totalIncome+=j.sal;
        }
        void print_info()
        {
            cout<<"Total Income will be: "<<totalIncome<<endl;
        }
        Total operator-(MonthlyExpense m1)
        {
            Total t1;
            t1.totalIncome = totalIncome - m1.expense;
            return t1;
        }
        void operator=(Total t1)
        {
            this->totalIncome = t1.totalIncome;
        }
};
int main()
{
    Job j1;
    Investing i1;
    j1.get_info();
    i1.get_info();
    Total t1;
    MonthlyExpense me1;
    me1.get_expense();
    t1+=j1;
    t1+=i1;
    j1.print_info();
    i1.print_info();
    t1.print_info();
    Total t2;
    t2 = t1-me1;
    t2.print_info();
    return 0;
}
