#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool Prime(int n)
{
    bool prime = true;
    if(n<2)
    {
        return false;
    }
    else if(n==2||n==3)
        return prime;
    else
    {
        if(n%6!=1&&n%6!=5)
        {
            prime = false;
        }
        else
        {
            for(int i = 5;i<=sqrt(n);i+=6)
            {
                if(n%i==0||n%(i+2)==0)
                    prime = false;
            }
        }
        return prime;
    }
}

int a[100001];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n;i++)
    {
        if(Prime(a[i]))
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}