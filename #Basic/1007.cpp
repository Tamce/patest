#include <iostream>
#include <cmath>
using namespace std;
int prime[10000];
int num;
int main()
{
    prime[0] = 2;
    prime[1] = 3;
    num = 2;

    int n = 0;
    cin >> n;
    // 计算素数先
    for (int i = 5; i <= n; i += 2)
    {
        bool p = true;
        for (int j = 1; j < num; ++j)
        {
            // 最大情况不加此限制条件会做很多没必要的计算
            if (prime[j] > sqrt(i)) break;
            if (i % prime[j] == 0)
                p = false;
        }
        if (p)
        {
            prime[num++] = i;
        }
    }

    int result = 0;
    for (int i = 0; i < num - 1; ++i)
    {
        if (prime[i + 1] - prime[i] == 2) ++result;
    }
    cout << result;
    return 0;
}
