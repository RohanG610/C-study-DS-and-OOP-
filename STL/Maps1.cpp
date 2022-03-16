#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<string, int> marks;
    marks["Harry"] = 98;
    marks["Rohan"] = 76;
    map<string,int>::iterator itr;
    for(itr = marks.begin(); itr!=marks.end(); itr++)
    {
        cout<<(*itr).first<<" has "<<(*itr).second<<" marks\n";
    }
    return 0;
}
