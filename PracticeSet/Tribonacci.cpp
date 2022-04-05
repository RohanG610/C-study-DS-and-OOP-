#include<iostream>
#include<vector>
std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    std::vector<int> result;
    if(n>0)
      result.push_back(signature[0]);
    if(n>1)
      result.push_back(signature[1]);
    if(n>2)
      result.push_back(signature[2]);
    for(int i=2;i<n-1;i++)
    {
      result.push_back(result[i-2]+result[i-1]+result[i]);
    }
    return result;
}
int main()
{
    int n;
    std::cin>>n;
    std::vector<int> v = {1,2,3};
    std::vector<int> result = tribonacci(v,n);
    for(int i=0;i<result.size();i++){
        std::cout<<result[i]<<" ";
    }
    return 0;
}
