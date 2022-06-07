#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
bool Prime(int n)
{
    bool p = true;
    if(n%6!=1&&n%6!=5)
    {
        p = false;
    }
    else
    {
        for(int i = 5;i<=sqrt(n);i+=6)
        {
            if(n%i==0||n%(i+2)==0)
            {
                p = false;
            }
        }
    }
    return p;
}
int a[21];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    return 0;
}