#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); i++)
      a[i] *= a[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}
int main()
{
    vector<int> a = {121, 144, 19, 161, 19, 144, 19, 11};
    vector<int> b = {14641, 20736, 361, 25921, 361, 20736, 361, 121};
    if(comp(a,b))
        cout<<"True";
    else
        cout<<"False";
}
