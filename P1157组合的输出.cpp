#include<iostream>
using namespace std;
int r,a[100],n;
void dfs(int k)
{
    int i;
    if(k>r)
    {
        for(int i = 1;i<=r;i++)
        {
            printf("%3d",a[i]);
        }
        printf("\n");
        return;
    }
    for(int i = a[k-1]+1;i<=n;i++)
    {
        a[k] = i;
        dfs(k+1);
    }
}
int main()
{
    scanf("%d%d",&n,&r);
    dfs(1);
    return 0;
}