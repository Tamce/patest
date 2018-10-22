#include <iostream>
#include <map>
#include <functional>
using namespace std;

int main()
{
  int k, n;
  double a;
  map<int, double, greater<int>> poly;
  for (auto i = 0; i < 2; ++i) {
    cin >> k;
    for (auto j = 0; j < k; ++j) {
      cin >> n >> a;
      poly[n] += a;
      if (poly[n] > -1e-4 && poly[n] < 1e-4) {
        poly.erase(n);
      }
    }
  }

  cout.precision(1);
  cout.setf(ios::fixed);
  cout << poly.size();
  for (auto key : poly) {
    cout << " " << key.first << " " << key.second;
  }
  return 0;
}
