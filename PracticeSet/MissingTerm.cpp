#include<iostream>
#include<vector>
using namespace std;
static long findMissing(vector<long> list){
  int i,j,a,d1,d2,missing;
  a=list[0];
  d1=list[1]-list[0];
  d2=list[list.size()-1]-list[list.size()-2];
  if(list.size()==3)
  {
    if(list[2]==list[0]+(3*d1))
    {
      missing=list[2]-d1;
    }
    else if(list[2]==list[0]+(3*d2))
    {
      missing=list[0]+d2;
    }
  }
  if(d1!=d2)
  {
    if(d1==list[list.size()-2]-list[list.size()-3])
    {
      missing=list[list.size()-1]-d1;
      return missing;
    }
    else if(d2==list[2]-list[1])
    {
      missing=list[0]+d2;
      return missing;
    }
  }
  for(i=1;i<list.size();i++)
  {
    if(list[i]-list[i-1]!=d1)
    {
      missing=list[i-1]+d1;
      break;
    }
  }
  return missing;
}
int main()
{
    vector<long> v1 = {1,3,5,7,11};
    long missing = findMissing(v1);
    cout<<missing;
    return 0;
}
