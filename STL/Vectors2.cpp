#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    int n,i,temp;
    cout<<"Enter Number to provide Lenght"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        vec.push_back(temp);//Putting Number At End
    }
    for(i=0;i<n;i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    int a,b;
    cout<<"Enter a Range Number to eraser:\n";
    cin>>a>>b;
    vec.erase(vec.begin()+a,vec.begin()+b);
    for(i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
    vec.resize(vec.size()-1);
    return 0;
}
