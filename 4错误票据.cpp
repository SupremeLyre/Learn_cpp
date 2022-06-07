#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<long long>a;
int main()
{
    int n;
    cin>>n;
    int N = 1;
    int ans1 = 0,ans2 = 0;
    for(int i = 0;i<n;i++)
    {
        long long temp;
        while(scanf("%lld",&temp)!=EOF)
        {
            a.push_back(temp);
        }
    }
    sort(a.begin(),a.end());
    for(int i = 1;i<a.size();i++)
    {
        if(a[i]-a[i-1]==2)
        {
            ans1 = a[i]-1;
        }
        else if(a[i] == a[i-1])
        {
            ans2 = a[i];
        }
    }
    printf("%d %d",ans1,ans2);
    return 0;
}