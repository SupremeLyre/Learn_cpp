#include <iostream>
#include <algorithm>
using namespace std;
const int n = 7;
int a[8];
int main()
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);
    if (a[0] + a[1] == a[2])
    {
        printf("%d %d %d", a[0], a[1], a[3]);
    }
    else
        printf("%d %d %d", a[0], a[1], a[2]);
    return 0;
}