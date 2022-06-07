#include <iostream>
#include <string.h>
using namespace std;
const int N = 10 + 1e5;
int n, m;
int a[N], b[N];
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < m; j++)
        scanf("%d", &b[j]);
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
            i++;
        j++;
    }
    if (i == n)
        puts("Yes");
    else
        puts("No");
}