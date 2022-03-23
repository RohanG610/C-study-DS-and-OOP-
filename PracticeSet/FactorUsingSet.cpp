#include<iostream>
#include<set>
using namespace std;
static int factors(int lst)
{
  set<int> set1;
  int temp = lst;
  for(int i=2;i<=temp;)
  {
    if(temp%i==0)
    {
      temp/=i;
      set1.insert(i);
    }
    else
    {
      i++;
    }
  }
  set<int>::iterator itr;
  for(itr = set1.begin();itr!=set1.end();itr++)
  {
    cout<<*itr<<endl;
  }
}
int main()
{
  factors(60);
  return 0;
}
