// a('A') + 'P' + b('A') + 'T' + c('A')
// c - a(b - 1) = a
// c = ab
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, n;
    char str[101];
    const char *p;
    int type;
    bool pass, pexist, texist;
    bool first = true;
    cin >> n;
    while (n-- > 0)
    {
        p = str;
        // 'A' type: 0 P 1 T 2
        type = 0;
        a = b = c = 0;
        pass = true;
        pexist = texist = false;
        cin >> str;
        for (; *p != '\0'; ++p)
        {
            if (*p == 'A')
            {
                if (type == 0) ++a;
                else if (type == 1) ++b;
                else ++c;
            } else if (*p == 'P')
            {
                pexist = true;
                if (type == 0) type = 1;
                else
                {
                    pass = false;
                    break;
                }
            } else if (*p == 'T')
            {
                texist = true;
                if (type == 1) type = 2;
                else
                {
                    pass = false;
                    break;
                }
            } else
            {
                pass = false;
                break;
            }
        }
        if (!first)
            cout << '\n';
        if (pass && pexist && texist && b != 0 && c == a * b)
            cout << "YES";
        else
            cout << "NO";
        first = false;
    }
    return 0;
}

/**
 成功推出了公式，在本地测试时发现一个问题：少判断 b == 0 的情况

 在提交后发现少考虑情况： `P` `T` 字符不存在的情况，即忘记确保两个字符至少出现一次。
 思路正确。

 思路为：
 记 na, nb, nc 为字符串 "aPbTc" a, b, c 处字符 'A' 出现的次数，我得出的通过条件为： pass && nb > 0 && nc == na * nb
 其中 pass 为 true 的条件是 P, T 字符出现一次且 P 出现在 T 左侧且字符串不包含 P, A, T 以外的字符

*/