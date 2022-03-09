#include<iostream>
using namespace std;

int main()
{
    try{
        throw 10;//Note: Type conversion don't occur in throw, for this example int will not become char*(string), it gives error "terminate called after throwing an instance of 'int'"
    }
    catch(char *excp)
    {
        cout<<"Exception Caught "<<excp<<endl;
    }
    catch(...)//Catch-all block: It is used to catch all types of exceptions.
    {
        cout<<"Some other error\n";
    }
}
