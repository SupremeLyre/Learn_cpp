#include <algorithm>
#include <iostream>
#include <cstring>
 
using namespace std;
 
typedef long long LL;
 
const int N = 200010;
 
int a[N];
int pe[30];
 
void pre(int ai)
{
    int cnt = 0;
    for(int i = 0; i <= 19; i++)
    {
        if(ai >> i & 1) pe[cnt] ++;
        cnt++;
    }
}
 
int t, n, x;
 
int main()
{
// #ifdef LOCAL
//     freopen("in.txt", "r", stdin);
//     freopen("out.txt", "w", stdout);
// #endif
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            pre(a[i]);
            x ^= a[i];
        }
        // for(int i = 0; i <= 19; i++)
        //     cout << pe[i] << ' ';
        // return 0;
        if(!x)
            cout << 0 << endl;
        else
        {
            for(int i = 19; i >= 0; i--)
            {
                if(pe[i] % 2 == 0) continue;
                else if(pe[i] == 1) {cout << 1 << endl; break;}
                else if((n - pe[i]) % 2 == 0) {cout << 1 << endl; break;}
                else if((n - pe[i]) % 2 == 1) {cout << -1 << endl; break;}
            }
        }
        memset(pe, 0, sizeof pe);
        x = 0;
    }
    return 0;
}