#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    set<int, greater<int> > key;
    int n, input;
    bool first = true;
    cin >> n;
    while (n-- > 0)
    {
        cin >> input;
        s.insert(input);
    }
    for (set<int>::iterator i = s.begin(); i != s.end(); ++i)
    {
        if (key.count(*i) > 0)
            continue;
        n = *i;
        key.insert(n);
        while (n != 1)
        {
            if (n & 1)
                n = (3 * n + 1) / 2;
            else
                n = n / 2;
            if (s.count(n) > 0)
            {
                s.erase(n);
                i = s.begin();
            }
            if (key.count(n) > 0)
            {
                key.erase(n);
            }
        }
    }
    key.erase(1);
    first = true;
    for (set<int>::iterator i = key.begin(); i != key.end(); ++i)
    {
        if (!first)
            cout << " ";
        cout << *i;
        first = false;
    }
    return 0;
}