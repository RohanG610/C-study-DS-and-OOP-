#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s1;
    int queries;
    cin>>queries;
    for(int i=0;i<queries;i++)
    {
        int temp,temp2;
        cin>>temp>>temp2;
        if(temp==1)
        {
            s1.insert(temp2);
        }
        else if(temp==2)
        {
            s1.erase(temp2);
        }
        else if(temp==3)
        {
            set<int>::iterator itr = s1.find(temp2);
            if(itr==s1.end())
            {
                cout<<"No\n";
            }
            else
            {
                cout<<"Yes\n";
            }
        }
    }
    return 0;
}
