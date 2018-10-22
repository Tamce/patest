/*

读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10^100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu

*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;
const char *alpha[10] = {
    "ling",
    "yi",
    "er",
    "san",
    "si",
    "wu",
    "liu",
    "qi",
    "ba",
    "jiu"
};

int main()
{
    int result = 0, rresult = 0;
    // Using cin.get() + EOF = Wrong Answer
    char input[101];
    cin.getline(input, 101);
    for (const char *p = input; *p != '\0'; ++p)
        result += *p - '0';
    if (result == 0)
    {
        cout << "ling";
        return 0;
    }
    stringstream ss;
    ss << result;
    const char *str = ss.str().c_str();
    for (bool first = true; *str != '\0'; ++str)
    {
        if (first)
        {
            cout << alpha[*str - '0'];
            first = false;
        }
        else
            cout << " " << alpha[*str - '0'];
    }
    return 0;
}