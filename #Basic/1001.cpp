#include <iostream>
using namespace std;
int main()
{
  int n = 1;
  int i = 0;
  cin >> n;
  while (n != 1)
  {
    if (n & 1 == 1)
      n = (3 * n + 1) / 2;
    else
      n = n / 2;
    ++i;
  }
  cout << i;
  return 0;
}