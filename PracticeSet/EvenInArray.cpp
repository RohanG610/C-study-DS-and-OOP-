#include <iostream>
#include <vector>

using namespace std;

vector<int> evenNumbers(vector<int> arr, int n) {
  vector<int> evennum;
  for(int i=0;i<arr.size();i++)
  {
    if(arr[i]%2==0)
    {
      evennum.push_back(arr[i]);
    }
  }
  vector<int>::iterator start = evennum.begin(),end = evennum.end()-n;
  evennum.erase(start,end);
  return evennum;
}
int main()
{
    int n;
    vector<int> vec;
    cout<<"Enter length of array: ";
    cin>>n;
    cout<<"Enter array elements:\n";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    cout<<"Enter number of even required: ";
    cin>>n;
    vector<int> result = evenNumbers(vec,n);
    cout<<"Result: ";
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}
