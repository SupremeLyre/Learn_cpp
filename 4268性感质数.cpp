#include <iostream>
#include <cmath>
using namespace std;
const int N = 10 + 1E8;
bool Prime(int n)
{
    bool prime = true;
    if (n < 2)
    {
        return false;
    }
    else if (n == 2 || n == 3)
        return prime;
    else
    {
        if (n % 6 != 1 && n % 6 != 5)
        {
            prime = false;
        }
        else
        {
            for (int i = 5; i <= sqrt(n); i += 6)
            {
                if (n % i == 0 || n % (i + 2) == 0)
                    prime = false;
            }
        }
        return prime;
    }
}
int n;
int main()
{
    scanf("%d", &n);
    if (Prime(n) && Prime(n - 6))
        printf("Yes\n%d", n - 6);
    else if (Prime(n) && Prime(n + 6) && (!Prime(n - 6)))
        printf("Yes\n%d", n + 6);
    else
    {
        printf("No\n");
        int tmp = n;
        while (tmp++ < N)
        {
            if ((Prime(tmp) && Prime(tmp + 6)) || (Prime(tmp) && Prime(tmp - 6)))
            {
                printf("%d\n", tmp);
                break;
            }
        }
    }
    return 0;
}