#include<iostream>
#include<algorithm>
using namespace std;
int a[100001];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i = 1;i<=n;i++)
    {
        a[i] = i;
    }
    for(int i = 1;i<=m;i++)
    {
        bool p;
        int q;
        cin>>p>>q;
        if(p)
        {
            sort(a+q,a+n+1);
        }
        else
        {
            sort(a+1,a+q+1,cmp);
        }
    }
    for(int i = 1;i<=m;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}