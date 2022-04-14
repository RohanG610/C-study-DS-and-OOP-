#include <iostream>
#include <string>
using namespace std;

bool solution(string const &str, string const &ending) {
  int i=str.length()-1,j=ending.length()-1;
  for(;j>=0;i--,j--)
  {
    if(str[i]!=ending[j])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string str="hello",ending;
  cout<<"Guess string: ";
  getline(cin,ending);
  if(solution(str,ending))
    cout<<"Ending is right";
  else
    cout<<"Ending is wrong";
  return 0;
}
