#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string arr[81];
int main()
{
    stringstream ss;
    getline(cin, arr[0]);
    ss.str(arr[0]);
    int i = 0;
    while (ss)
        ss >> arr[i++];
    --i;
    cout << arr[--i];
    while (i-- > 0)
        cout << " " << arr[i];
    return 0;
}
