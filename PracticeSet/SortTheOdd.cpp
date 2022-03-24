#include<iostream>
#include<vector>
using namespace std;
vector<int> sortArray(vector<int> array)
{
    int i,j,temp,len=array.size();
    for(i=0;i<len;i++)
    {
        if(array[i]%2==1)
        {
          for(j=i+1;j<len;j++)
          {
            if(array[i]>array[j] && array[j]%2==1)
            {
              temp=array[i];
              array[i]=array[j];
              array[j]=temp;
            }
          }
        }
    }
    return array;
}
int main()
{
    vector<int> v1;
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    for(int i = 0; i<n;i++)
    {
        int temp;
        cin>>temp;
        v1.push_back(temp);
    }
    vector<int> v2 = sortArray(v1);
    for(int i=0;i<n;i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
}
