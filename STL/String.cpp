#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "Hello", str2 ="World";
    cout<<str1 + " " + str2<<endl;
    str1.append(str2);
    cout<<str1<<endl;
    cout<<"Lenght: "<<str1.size()<<endl;//we also can use length()
    string str3;
    //Getting String
    getline(cin,str3);//don't use cin as it cuts when there is whitespace
    cout<<str3;
    return 0;
}
