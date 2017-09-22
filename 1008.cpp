#include <iostream>
using namespace std;
int arr[101];
int main()
{
    int n, m;
    cin >> n >> m;
    m = m % n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    cout << arr[(n - m) % n];
    for (int i = 1; i < n; ++i)
        cout << " " << arr[((i - m) + n) % n];
    return 0;
}
/*
#include <iostream>
using namespace std;
int arr[101];
int main()
{
    int n, m;
    cin >> n >> m;
    m = m % n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    bool first = true;
    for (int i = 0; i < n; ++i)
    {
        if (!first)
            cout << " ";
        cout << arr[((i - m) + n) % n];
        first = false;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int arr[101];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    m = m % n;
    bool first = true;
    for (int i = n - m; i < n; ++i)
    {
        if (!first)
            cout << " ";
        cout << arr[i];
        first = false;
    }
    for (int i = 0; i < n - m; ++i)
    {
        if (!first)
            cout << " ";
        cout << arr[i];
        first = false;
    }
    return 0;
}
*/
