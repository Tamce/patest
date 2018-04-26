#include <iostream>
#include <cctype>
using namespace std;
const char *dic[] = {
    "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"
};
int main()
{
    char *str[4] = {new char[61], new char[61], new char[61], new char[61]};
    for (int i = 0; i < 4; ++i)
        cin >> str[i];
    char *p1, *p2;
    p1 = str[0];
    p2 = str[1];
    while (*p1 != 0 && *p2 != 0)
    {
        if ('A' <= *p1 && *p1 <= 'G' && *p1 == *p2)
        {
            cout << dic[*p1 - 'A'] << " ";
            ++p1, ++p2;
            break;
        }
        ++p1, ++p2;
    }
    while (*p1 != 0 && *p2 != 0)
    {
        if ('0' <= *p1 && *p1 <= '9' && *p1 == *p2)
        {
            cout << "0" << *p1 - '0';
            break;
        }
        if ('A' <= *p1 && *p1 <= 'N' && *p1 == *p2)
        {
            cout << *p1 - 'A' + 10;
            break;
        }
        ++p1, ++p2;
    }
    cout << ":";
    for (int i = 0; true; ++i)
    {
        if (isalpha(str[2][i]) && str[2][i] == str[3][i])
        {
            if (i < 10) cout << 0;
            cout << i;
            break;
        }
    }
    return 0;
}