#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    //Intialization of pairs
    pair<int,int> p1;
    p1 = {1,0};
    p1.first=2;
    p1.second=3;
    p1 = make_pair(4,5);
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int,int> p2(1,0);
    cout<<p2.first<<" "<<p2.second<<endl;
    //Pairs array
    pair<int,int> p3[3];
    p3[0] = {0,1};
    p3[1] = {2,3};
    p3[2] = {4,5};
    for(int i=0;i<3;i++)
    {
        cout<<p3[i].first<<" "<<p3[i].second<<endl;
    }
    return 0;
}
