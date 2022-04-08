#include <iostream>
#include <vector>
using namespace std;
vector<int> xbonacci(vector<int> signature, int n)
{
  vector<int> result;
  for(int i=0;i<signature.size() && i<n;i++)
  {
    result.push_back(signature[i]);
  }
  for(int i= signature.size();i<n;i++)
  {
    int sum=0;
    for(int j=i-signature.size();j<i;j++)
    {
      sum+=result[j];
    }
    result.push_back(sum);
  }
  return result;
}
int main()
{
    int n;
    vector<int> vec;
    cout<<"Enter Limit of Vector: ";
    cin>>n;
    cout<<"Enter Vector:\n";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    cout<<"Enter Limit of Xbonacci: ";
    cin>>n;
    cout<<"Require Xbonacci series:\n";
    vec = xbonacci(vec,n);
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<endl;
    }
    return 0;
}
