#include<iostream>
int digital_root(int n)
{
  int a[10],temp,i,j,total=0,count=0;
  temp=n;
  for(;temp>=10;)
  {
    for(i=0;;i++)
    {
      a[i]=temp%10;
      temp=temp/10;
      count++;
      if(temp==0)
      {
        break;
      }
    }
    for(j=0;j<count;j++){
      total=total+a[j];
    }
    temp=total;
    total=0;
    count=0;
  }
  return temp;
}
int main()
{
    long a;
    std::cin>>a;
    std::cout<<digital_root(a);
    return 0;
}
