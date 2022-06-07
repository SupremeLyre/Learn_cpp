#include <iostream>
#include <algorithm>
using namespace std;
const int N = 20;
int a[N];
string x;
int main()
{
    cin >> x;
    for (int i = x.length() - 1; i >= 0; i--)
    {
        a[i] = x[i] - '0';
    }
    for (int i = 0; i < x.length(); i++)
    {
        a[i] = min(a[i], 9 - a[i]);
    }
    if (a[0] == 0)
    {
        a[0] = 9;
    }
    for (int i = 0; i < x.length(); i++)
    {
        cout << a[i];
    }
    return 0;
}