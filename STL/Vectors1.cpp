#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;
    int i,n,temp;
    cout<<"Enter value of Intial Input Lenght: ";
    cin>>n;
    cout<<"Inserting next element in beginning\n";
    for(i=0;i<n;i++)
    {
        cin>>temp;
        vec.insert(vec.begin(),temp);
    }
    cout<<"Length of Vector is "<<vec.size()<<endl;
    cout<<"Last Element is Poped Now!";
    vec.pop_back();
    for(i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    int a,b;
    cout<<"\nEnter a Postion to eraser that Element\n";
    cin>>a;
    vec.erase(vec.begin()+a);
    for(i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    return 0;
}
