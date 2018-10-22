#include <iostream>
using namespace std;
int main()
{
    int n;
    int a, b, c;
    cin >> n;
    c = n % 10;
    b = (n / 10) % 10;
    a = (n / 100) % 10;
    for (int i = 0; i < a; ++i)
        cout << "B";
    for (int i = 0; i < b; ++i)
        cout << "S";
    for (int i = 1; i <= c; ++i)
        cout << i;
    return 0;
}