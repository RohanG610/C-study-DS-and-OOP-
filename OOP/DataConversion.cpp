#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class TimeAMPM
{
    public:
        string s1;
        TimeAMPM()
        {
            s1 = "";
        }
};
class Time
{
    public:
        int hrs,mins;
        Time()
        {
            hrs=0;
            mins=0;
        }
        Time(int x)
        {
            hrs = x/60;
            mins = x%60;
        }
        operator int()
        {
            return ((hrs*60)+mins);
        }
        operator TimeAMPM() //same effect can be achieve by constructor
        {
            TimeAMPM sun;
            stringstream ss1;
            if(hrs<12)
                ss1<<hrs<<":"<<mins<<"am";
            else
                ss1<<(hrs-12)<<":"<<mins<<"pm";
            ss1>>sun.s1;
            return sun;
        }
};
int main()
{
    Time t1;
    int minutes;
    cin>>minutes;
    t1 = minutes;//Automatic conversion due to constructor
    cout<<t1.hrs<<":"<<t1.mins;
    int totaltime = t1;//By using operator function
    cout<<"\nTotal time in minutes: "<<totaltime<<endl;
    TimeAMPM t2 = t1;
    cout<<t2.s1;
    return 0;
}
