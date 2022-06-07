#include<stdio.h>
#define pi 3.14159265358979323
int main()
{
    int r;
    scanf("%d",&r);
    double s;
    s = pi * r * r;
    printf("%.7lf",s);
    return 0;
}