#include<stdio.h>
int main()
{
    int n;
    int k = 1;
    int x;
    scanf("%d",&n);
    while(1)
    {
        for(x = 100;x>0;x--)
        {
            if(364*(x+3*k)==n)
            {
                printf("%d\n",x);
                printf("%d",k);
                return 0;
            }
        }
        k++;
    }
    return 0;
}