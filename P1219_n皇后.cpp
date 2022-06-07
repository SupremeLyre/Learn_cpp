#include<iostream>
using namespace std;
const int N = 30;
int n;
int path[N];
bool col[N],dg[N],udg[N];
void dfs(int u)
{
    int num = 0;
    if(u == n)
    {
        for(int i = 0;i < u;i++)
        {
            printf("%d ",path[i]);
        }
        printf("\n");
        num++;
        return;
    }
    for(int i = 0;i < n;i ++)
    {
        if(!col[i] && !dg[i + u] && !udg[i - u + n])
        {
            path[i] = i;
            col[i] = dg[i + u] = udg[i - u + n] = true;
            dfs(u+1);
            col[i] = dg[i + u] = udg[i - u + n] = false;
        }
    }
    printf("%d",num);
}
int main()
{
    scanf("%d",&n);
    dfs(0);
    return 0;
}