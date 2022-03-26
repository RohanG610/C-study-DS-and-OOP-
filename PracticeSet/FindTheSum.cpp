#include<iostream>
#include<vector>
using namespace std;
pair<size_t, size_t> two_sum(const vector<int>& numbers, int target) {
  int i,j,postion[2];
  for(i=0;i<numbers.size();i++)
  {
    postion[0]=i;
    for(j=i+1;j<numbers.size();j++)
    {
      postion[1]=j;
      if(numbers[i]+numbers[j]==target)
      {
        return {postion[0],postion[1]};
      }
    }
  }
  return {0, 0};
}
int main()
{
    vector<int> vec1 = {10,3,15,6,7,9};
    pair<int,int> p1 = two_sum(vec1,24);
    cout<<p1.first<<" "<<p1.second<<endl;
}
