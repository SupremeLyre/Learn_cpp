#include<iostream>
using namespace std;
const int N = 20;
int n;
char g[N][N];
bool col[N],dg[N],udg[N];
//全排列
void dfs(int u)
{
    if(u == n)
    {
        for(int i  = 0;i < n;i ++)
        {
            puts(g[i]);
        }
        printf("\n");
        return;
    }
    for(int i = 0;i < n;i ++)
    {
        if(!col[i] && !dg[i + u] && !udg[i - u + n])
        {
            g[u][i] = 'Q';
            col[i] = dg[i + u] = udg[i - u + n] = true;
            dfs(u+1);
            col[i] = dg[i + u] = udg[i - u + n] = false;
            g[u][i] = '.';
        }
    }
}

int main()
{
    scanf("%d",&n);
    for(int i = 0;i < n;i ++)
    {
        for(int j = 0;j < n;j ++)
        {
            g[i][j] = '.';
        }
    }
    dfs(0);
    return 0;
}