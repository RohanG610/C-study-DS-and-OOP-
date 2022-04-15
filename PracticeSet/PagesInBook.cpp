#include <iostream>
#include <sstream>
using namespace std;
int amount_of_pages(int summary){
  std::string s1 = "";
  int k=1;
  std::stringstream ss;
  while(summary>0)
  {
    string temp;
    ss<<k;
    ss>>temp;
    ss.clear();
    s1+=temp;
    summary-=temp.length();
    k+=1;
  }
  return k-1;
}
int main()
{
    cout<<amount_of_pages(1095);
    return 0;
}
