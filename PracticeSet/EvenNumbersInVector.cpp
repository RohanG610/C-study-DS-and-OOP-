#include<iostream>
#include <vector>

std::vector<int> evenNumbers(std::vector<int> arr, int n) {
  std::vector<int> evennum;
  for(int i=0;i<arr.size();i++)
  {
    if(arr[i]%2==0)
    {
      evennum.push_back(arr[i]);
    }
  }
  std::vector<int>::iterator start = evennum.begin(),end = evennum.end()-n;
  evennum.erase(start,end);
  return evennum;
}
int main()
{
    int n;
    std::vector<int> v;
    std::cout<<"Enter size of Vector: "<<std::endl;
    std::cin>>n;
    std::cout<<"Enter the elements:"<<std::endl;
    for(int i=0;i<n;i++)
    {
        int temp;
        std::cin>>temp;
        v.push_back(temp);
    }
    std::cout<<"Enter number of even at the end do you want:"<<std::endl;
    std::cin>>n;
    std::cout<<"Require Vector is: [ ";
    std::vector<int> result = evenNumbers(v,n);
    for(int i=0;i<result.size();i++)
    {
        std::cout<<result[i]<<" ";
    }
    std::cout<<"]\n";
    return 0;
}
