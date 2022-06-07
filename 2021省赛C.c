#include<stdio.h>
long long second;
int main()
{
    scanf("%lld",&second);
    second /= 1000;
    int dd = second/3600;
    dd %= 24;
    int s = second%3600;
    int mm = s/60;
    int ss = s%60;
    printf("%02d:%02d:%02d",dd,mm,ss);
    return 0;
}