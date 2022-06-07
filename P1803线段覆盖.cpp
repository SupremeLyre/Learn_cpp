#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int cmp(pair<int,int> a, pair<int,int> b)
{
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    pair<int,int>*a = new pair<int,int>[n];
    pair<int,int> b;
    for(int i = 0;i < n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n,cmp);
    int sum = 1;
    b.first = a[0].first;
    b.second = a[0].second;
    int i = 1;
    while(i<n)
    {
        if(a[i].first>=b.second)
        {
            b.first = a[i].first;
            b.second = a[i].second;
            sum++;
        }
        i++;
    }
    cout<<sum<<endl;
    delete[] a;
    return 0;
}