#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int n = 1;
    while(N>n*(n+1)/2)
    {
        n++;        
    }
    int n1 = n*(n+1)/2;
    int n2 = (n*n-n+2)/2;
    int r1 = 1+n1-N;
    int r2 = 1+N-n2;
    printf("%d/%d", r1, r2);
    return 0;
}