#include <iostream>
#include <iomanip>
using namespace std;
inline void w(int a, bool s)
{
    if (a == 0)
        cout << 'N';
    else
        cout << a;
    if (s) cout << " ";
}
int a1, a2, a3, a4, a5, c4, c2;
int main()
{
    int n = 0, i;
    int sgn = 1;
    a1 = a2 = a3 = a4 = c4 = c2 = 0;
    a5 = -1;
    cin >> n;
    while (n-- > 0)
    {
        cin >> i;
        if (!(i & 1) && !(i % 5))
            a1 += i;
        if (i % 5 == 1)
        {
            a2 += sgn * i;
            sgn *= -1;
            ++c2;
        } else if (i % 5 == 2)
            ++a3;
        else if (i % 5 == 3)
        {
            a4 += i;
            ++c4;
        } else if (i % 5 == 4)
            a5 = a5 > i ? a5 : i;
    }
    w(a1, true);
    if (c2 == 0) cout << "N ";
    else cout << a2 << " ";
    w(a3, true);
    cout.precision(1);
    if (c4 == 0) cout << "N ";
    else
    {
        cout.setf(ios::fixed);
        cout << float(a4)/c4 << " ";
    }
    if (a5 < 0) cout << "N";
    else cout << a5;
    return 0;
}
