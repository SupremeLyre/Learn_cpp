#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
const int N = 101;
class Student
{
public:
    string name;
    int num;
    int year;
    int month;
    int day;
} s[N];
bool cmp(Student a, Student b)
{
    return a.year == b.year ? (a.month == b.month ? (a.day == b.day ? (a.num > b.num) : a.day < b.day) : a.month < b.month) : a.year < b.year;
}
int n;
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].year >> s[i].month >> s[i].day;
        s[i].num = i + 1;
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s[i].name.c_str());
    }
    return 0;
}