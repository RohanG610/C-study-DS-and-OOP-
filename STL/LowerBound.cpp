#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,n2;
    vector<int> vec;
    vector<int>::iterator lwr;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        int temp;
        cin>>temp;
        lwr = lower_bound(vec.begin(),vec.end(),temp);
        if(vec[lwr-vec.begin()]==temp)
        {
            cout<<"Yes"<<" "<<(lwr-vec.begin()+1)<<endl;
        }
        else
        {
            cout<<"No"<<" "<<(lwr-vec.begin()+1)<<endl;
        }
    }
    return 0;
}
