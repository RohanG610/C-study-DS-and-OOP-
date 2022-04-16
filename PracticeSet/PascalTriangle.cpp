#include <vector>
std::vector<long long> pascalsTriangle(int n)
{
  std::vector<long long> result;
  for (long long line = 1; line <= n; line++)
  {
    long long C = 1;
    for (long long i = 1; i <= line; i++)
    {
        result.push_back(C);
        C = C * (line - i) / i;
    }
  }
  return result;
}
