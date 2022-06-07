#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
const int N = 22;
pair<int,string> a[N];
int n;
bool cmp(pair<int,string> &A,pair<int,string> &B)
{
    if(A.second.size()!=B.second.size())//位数不同，位数多的大
    {
        return A.second.size()>B.second.size();
    }
    for(int i = A.second.size() - 1;i >= 0;i --)
    {
        if(A.second[i]-'0' != B.second[i]-'0')//位数相同，位值大的大
        {
            return A.second[i]-'0' > B.second[i]-'0';
        }
    }
    return true;
}
int main()
{
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        cin>>a[i].second;
        reverse(a[i].second.begin(),a[i].second.end());//按逆序存储
        a[i].first = i + 1;
    }
    sort(a,a+n,cmp);
    reverse(a[0].second.begin(),a[0].second.end());
    printf("%d\n%s", a[0].first,a[0].second.c_str());
    return 0;
}