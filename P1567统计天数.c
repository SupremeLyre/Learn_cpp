#include<stdio.h>
int a[3];
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int n;
    scanf("%d", &n);
    int x,result;
    x = 0;
    result = 0;
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[2]);
        if(a[2]>a[1])
        {
            x++;
            result = max(result,x);
        }
        else
            x = 1;
        a[1] = a[2];
    }
    printf("%d",result);
    return 0;
}