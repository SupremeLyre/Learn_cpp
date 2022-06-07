#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool dp[101][200001];
int a[101];

int main()
{
    int i,j,n,sum = 0;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(i = 1;i<=n;i++)
    {
        for(j = 1;j<=sum;j++)
        {
            dp[i][j] = dp[i-1][j];
            if(!dp[i][j])
            {
                if(j == a[i])
                {
                    dp[i][j] = true;
                }
                if(dp[i-1][j+a[i]])
                {
                    dp[i][j] = true;
                }
                if(dp[i-1][abs(j-a[i])])
                {
                    dp[i][j] = true;
                }
            }
        }
    }
    long long ans = 0;
    for(j = 1;j<=sum;j++)
    {
        if(dp[n][j])
        {
            ans++;
        }
    }
    printf("%lld",ans);
    return 0;
}