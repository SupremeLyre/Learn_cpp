#include<stdio.h>
#include<stdbool.h>
typedef long long int ll;
ll N;
ll C(int n,int k)
{
    ll result = 1;
    for(int up = n,down = 1;down<=k;up--,down++)
    {
        result = result*up/down;
        if(result>N)
        {
            return result;
        }
    }
    return result;
}
bool check(int k)
{
    ll l = 2*k;
    ll r = N>l?N:l;
    while(l<r)
    {
        ll mid = l+r>>1;
        if(C(mid,k)>=N)
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }       
    }
    if(C(r,k) != N)
    {
        return false;
    }
    printf("%d",(r+1)*r/2+k+1);
    return true;
}
int main()
{
    scanf("%lld",&N);
    for(int j = 16;;j--)
    {
        if(check(j))
            break;
    }
    return 0;
}