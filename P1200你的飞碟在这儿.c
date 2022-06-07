#include<stdio.h>
#include<string.h>
int main()
{
    char a[7];
    char b[7];
    int n1=1,n2=1;
    scanf("%6s%6s",a,b);
    char *a2 = a;
    char *b2 = b;
    while(*a2 != '\0')
    {
        n1*=*a2-'@';
        a2++;
    }
    while(*b2!='\0')
    {
        n2*=*b2-'@';
        b2++;
    }
    if(n1%47==n2%47)
        printf("GO");
    else
        printf("STAY");
    return 0;
}