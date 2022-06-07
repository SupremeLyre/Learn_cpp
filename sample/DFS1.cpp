#include <iostream>
using namespace std;
const int N = 10;
int n;
int path[N];
bool vis[N];

void dfs(int u)
{
    if (u == n)
    {
        for (int i = 0; i < u; i++)
        {
            printf("%5d", path[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            path[u] = i;
            vis[i] = true;
            dfs(u + 1);
            vis[i] = false;
        }
    }
}

int main()
{
    scanf("%d", &n);
    dfs(0);
    return 0;
}