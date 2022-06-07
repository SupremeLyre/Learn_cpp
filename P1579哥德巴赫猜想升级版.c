#include<stdio.h>
#include<math.h>
#include<string.h>
int Prime(int n)
{
    int prime = 1;
    if(n==2||n==3)
        return prime;
    else
    {
        if(n%6!=1&&n%6!=5)
        {
            prime = 0;
        }
        else
        {
            for(int i = 5;i<=sqrt(n);i+=6)
            {
                if(n%i==0||n%(i+2)==0)
                    prime = 0;
            }
        }
        return prime;
    }
}
int a[20005];
int main()
{
    int n;
    scanf("%d",&n);
    memset(a,-1,sizeof(int)*20005);
    for(int i = 2;i<20000;i++)
    {
        if(Prime(i))
        {
            a[i] = i;
        }
        //printf("%d ",a[i]);
    }

    for(int i = 2;i<n;i++)
    {
        for(int j = 2;j<n;j++)
        {
            for(int k = 2;k<n;k++)
            {
                if(a[i]!=-1&&a[j]!=-1&&a[k]!=-1&&i+j+k == n)
                    {
                        printf("%d %d %d\n",i,j,k);
                        return 0;
                    }
            }
        }
    }

    return 0;
}