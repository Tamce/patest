#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
  int a, b, result;
  cin >> a >> b;
  result = a + b;
  if (result == 0) {
    cout << 0;
    return 0;
  }
  if (result < 0) {
    cout << "-";
    result = result * -1;
  }
  stringstream ss;
  ss << result;
  string str = ss.str();
  for (auto i = str.end() - 3; i > str.begin(); i -= 3) {
    str.insert(i, ',');
  }
  cout << str;
  return 0;
}
