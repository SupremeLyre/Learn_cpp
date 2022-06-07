/*
小蓝给学生们组织了一场考试，卷面总分为100 分，每个学生的得分都是一个0 到100 的整数。请计算这次考试的最高分、最低分和平均分。
输入
输入的第一行包含一个整数n，表示考试人数。
接下来n 行，每行包含一个0 至100 的整数，表示一个学生的得分。
输出
输出三行。
第一行包含一个整数，表示最高分。
第二行包含一个整数，表示最低分。
第三行包含一个实数，四舍五入保留正好两位小数，表示平均分。
*/
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int min;
    min = a[0];
    int max;
    max = a[n-1];
    double mean,sum;
    sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean = 1.0/n*sum;
    printf("%d\n%d\n%.2lf",max,min,mean);
    return 0;
}