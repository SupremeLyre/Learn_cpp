#include<stdio.h>
int main()
{
    long long n,m,zh,ch;
    zh = 0;
    ch = 0;
    scanf("%lld%lld",&n,&m);
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
        {
            if(i == j)
                zh += (n - i) * (m - j);
            else
                ch += (n - i) * (m - j);
        }
    printf("%lld %lld",zh,ch);
    return 0;
}