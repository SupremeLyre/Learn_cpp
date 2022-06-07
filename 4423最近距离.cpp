#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
const int N = 2e5 + 10;
int n;
int q[N], ans[N];
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &q[i]);
    }
    for (int i = 0, last = -n; i < n; i++)
    {
        if (!q[i])
        {
            last = i;
        }
        ans[i] = i - last;
    }
    for (int i = n - 1, last = n * 2; i >= 0; i--)
    {
        if (!q[i])
        {
            last = i;
        }
        ans[i] = min(ans[i], last - i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}