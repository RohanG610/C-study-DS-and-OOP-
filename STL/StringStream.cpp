#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    stringstream ss;
    ss<<str;//Insertion of str
    ss<<"10";//Insertion of 10
    int i;
    ss>>i;//Giving int by converting str to int
    cout<<i<<endl;
    ss.clear();//Clearing everything
    ss<<"HelloWorld";//Inserting HelloWorld
    ss.str("HelloEarth");//Clears everything and set content which are in curly brackets
    str = ss.str();//Return the content
    ss>>str;
    cout<<str;
    return 0;
}
