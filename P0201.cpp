#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n = 3;
    int a[3];
    for(int i = 0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+3);
    for(int i = 2;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}