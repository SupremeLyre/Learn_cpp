#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int N = 5005;
int n, m;
class Student
{
public:
    int num;
    int mark;
} s[N];
vector<Student> stu;
bool cmp(Student &a, Student &b)
{
    return a.mark == b.mark ? a.num < b.num : a.mark > b.mark;
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &s[i].num, &s[i].mark);
    }
    sort(s, s + n, cmp);
    int score = s[(int)(1.5 * m) - 1].mark;
    int idx = 0;
    while (s[idx].mark >= score)
    {
        stu.push_back(s[idx]);
        idx++;
    }
    printf("%d %d\n", score, idx);
    for (int i = 0; i < stu.size(); i++)
    {
        printf("%d %d\n", stu[i].num, stu[i].mark);
    }
    return 0;
}