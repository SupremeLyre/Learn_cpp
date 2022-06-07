#include<stdio.h>
#include<math.h>
int a[101];
int i = 0;
long long sum = 0;
int main()
{
    while(scanf("%d",&a[i])!=EOF)
    {
        sum+=a[i];
        i++;
    }
    sum*=pow(2,i-1);
    printf("%lld",sum);
    return 0;
}
