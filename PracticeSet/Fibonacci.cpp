int fib(int n)
{
  int f1=0,f2=1,temp,i;
  for(i=1;i<n;i++)
  {
    temp=f2;
    f2+=f1;
    f1=temp;
  }
  return f2;
}
