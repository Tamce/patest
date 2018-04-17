#include <iostream>
#include <cmath>
using namespace std;

unsigned int p[65535];

inline void calc(int N)
{
    int n = 1;
    int num = 3;
    while (n < N)
    {
        bool pr = true;
        for (int j = 0; j < n; ++j)
        {
            if (p[j] > sqrt(num)) break;
            if (num % p[j] == 0)
            {
                pr = false;
                break;
            }
        }
        if (pr)
            p[n++] = num;
        num += 2;
    }
}
int main()
{
    p[0] = 2;
    int M, N;
    cin >> M >> N;
    calc(N);
    int c = 1;
    for (int i = M - 1; i < N - 1; ++i)
    {
        cout << p[i];
        if (c % 10 == 0) cout << "\n";
        else cout << " ";
        ++c;
    }
    cout << p[N - 1];
    return 0;
}
