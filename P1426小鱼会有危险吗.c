#include<stdio.h>
int main()
{
    int s,x;
    scanf("%d%d",&s,&x);
    int l = s-x;
    int r = s+x;
    double d = 7,sum = 0;
    while(1)
    {
        if(sum>r)
        {
            printf("n");
            break;
        }
        else if(sum>=l&&sum<=r)
        {
            if(sum+d>r)
            {
                printf("n");
                break;
            }
            else
            {
                printf("y");
                break;
            }
        }
        sum+=d;
        d*=0.98;
    }
    return 0;
}