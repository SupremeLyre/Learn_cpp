#include<stdio.h>
int main()
{
    int a = 2,b = 3,c = 4,x = 0;
    x = a > b?(a > c?a:c):(b > c?b:c);
    printf("%d",x);
    return 0;
}