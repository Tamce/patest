#include <iostream>
#include <cstring>
using namespace std;
struct Student {
    char name[11];
    char num[11];
    int score;
};
inline void copy(Student &dst, Student &src)
{
    dst.score = src.score;
    strcpy(dst.name, src.name);
    strcpy(dst.num, src.num);
}
int main()
{
    Student stu[2], input;
    stu[0].score = -1;
    stu[1].score = 101;
    int n = 0;
    cin >> n;
    while (n-- > 0)
    {
        cin >> input.name >> input.num >> input.score;
        if (input.score > stu[0].score)
            copy(stu[0], input);
        if (input.score < stu[1].score)
            copy(stu[1], input);
    }
    cout << stu[0].name << " " << stu[0].num << "\n" << stu[1].name << " " << stu[1].num;
    return 0;
}