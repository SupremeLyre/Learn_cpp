#include<iostream>
#include<algorithm>
using namespace std;
const long int N = 2e6+7;
int a[N];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i = 0;i<m;i++)
    {
        int temp;
        scanf("%d",&temp);
        a[i] = temp;
    }
    sort(a,a+m);
    for(int i = 0;i<m;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}