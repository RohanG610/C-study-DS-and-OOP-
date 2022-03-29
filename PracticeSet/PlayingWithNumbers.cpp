#include<iostream>
using namespace std;
static int digPow(int n, int p)
{
    int total=0,powerer[10],a[10],len=0,i,j,temp,temp2;
    temp=n,temp2=p;
    for(i=0;;i++)
    {
      powerer[i]=temp%10;
      temp=temp/10;
      len++;
      if(temp==0){
        break;
      }
    }
    for(i=0;i<len;i++)
    {
      a[i]=powerer[i];
    }
    for(i=len-1;i>=0;i--)
    {
      for(j=0;j<temp2-1;j++)
      {
        powerer[i]=powerer[i]*a[i];
      }
      temp2++;
    }
    for(i=0;i<len;i++)
    {
      total+=powerer[i];
    }
    if(total%n==0){
      return total/n;
    }
    else{
      return -1;
    }
}
int main()
{
    int ans = digPow(46288, 3);
    if(ans==-1){
        cout<<"It is not possible";
    }
    else
        cout<<ans;
    return 0;
}
/*
89 --> 8¹ + 9² = 89 * 1
695 --> 6² + 9³ + 5⁴= 1390 = 695 * 2
46288 --> 4³ + 6⁴+ 2⁵ + 8⁶ + 8⁷ = 2360688 = 46288 * 51
*/
