#include<stdio.h>
int a[3001];
int min(int m,int n)
{
    int min = m<n?m:n;
    return min;
}
int main()
{
    int n,m;
    int temp = 0;
    scanf("%d%d",&n,&m);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int M;
    for(int i = 0;i<m;i++)
        M+=a[0+i];
    for(int i = 0;i<n-m+1;i++)
    {
        for(int j = 0;j<m;j++)
            temp += a[i+j];
        M = min(M,temp);
        temp = 0;
    }
    printf("%d",M);
    return 0;
}