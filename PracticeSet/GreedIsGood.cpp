#include<iostream>
#include <vector>

int score(const std::vector<int>& dice) {
  int loc[4],i,num[6]={0,0,0,0,0,0},a1,a5;
  int total=0;
  for(i=0;i<5;i++)
  {
    switch(dice[i])
    {
        case 1:
        num[0]+=1;
        break;
        case 2:
        num[1]+=1;
        break;
        case 3:
        num[2]+=1;
        break;
        case 4:
        num[3]+=1;
        break;
        case 5:
        num[4]+=1;
        break;
        case 6:
        num[5]+=1;
        break;
    }
  }
  for(i=2;i<=6;i++)
  {
    if(num[i-1]>=3)
    {
      if(i!=5)
      {
        total=total+(i*100);
      }
    }
  }
  if(num[0]>0)
  {
    if(num[0]<3)
    {
      total+=(100*num[0]);
    }
    else if(num[0]>=3)
    {
      total+=1000;
      num[0]=num[0]-3;
      total+=(100*num[0]);
    }
  }
  if(num[4]>0)
  {
    if(num[4]<3)
    {
      total+=(50*num[4]);
    }
    else if(num[4]>=3)
    {
      total+=500;
      num[4]=num[4]-3;
      total+=(100*num[4]);
    }
  }
  return total;
}
int main()
{
    std::vector<int> v1 = {5,1,2,6,1};
    int score1 = score(v1);
    std::cout<<score1;
    return 0;
}
/*
Greed is a dice game played with five six-sided dice. Your mission,
should you choose to accept it, is to score a throw according to these rules.
You will always be given an array with five six-sided dice values.
 Three 1's => 1000 points
 Three 6's =>  600 points
 Three 5's =>  500 points
 Three 4's =>  400 points
 Three 3's =>  300 points
 Three 2's =>  200 points
 One   1   =>  100 points
 One   5   =>   50 point
*/
