#include <iostream>
using namespace std;
int main()
{
  long long a, b, c;
  int n;
  cin >> n;
  bool first = true;
  for (int i = 1; i <= n; ++i)
  {
    cin >> a >> b >> c;
    if (!first)
    {
      cout << "\n";
    } else
      first = false;
    if (a + b > c)
    {
      cout << "Case #" << i << ": true";
    } else
    {
      cout << "Case #" << i << ": false";
    }
  }
  return 0;
}