#include <iostream>
#include <algorithm>
#include <vector>

class SqInRect
{
  public:
  static std::vector<int> sqInRect(int lng, int wdth)
  {
    std::vector<int> finish;
    int i=0;
    if(lng==wdth)
    {
      return {lng};
    }
    while(lng>0 && wdth>0)
    {
      if(lng==wdth)
      {
        finish.push_back(wdth);
        break;
      }
      if(lng>wdth)
      {
        finish.push_back(wdth);
        lng-=wdth;
      }
      else if(wdth>lng)
      {
        finish.push_back(lng);
        wdth-=lng;
      }
    }
    std::sort(finish.begin(),finish.end(),std::greater<>());
    return finish;
  }
};
int main()
{
    int l,w;
    std::cin>>l>>w;
    SqInRect rec1;
    std::vector<int> result = rec1.sqInRect(l,w);
    std::cout<<"Size of squares that can fit in "<<l<<"x"<<w<<" are : ";
    for(int i=0;i<result.size();i++)
    {
        std::cout<<result[i]<<" ";
    }
    return 0;
}
