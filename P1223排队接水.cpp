#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    pair<int,int>*a = new pair<int,int>[n];
    for(int i = 0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second = i+1;
    }
    sort(a,a+n);
    double sum = 0.0f;
    for(int i = 0;i<n;i++)
    {
        sum+=1.0*a[i].first*(n-1-i);
        cout<<a[i].second<<" ";
    }
    printf("\n%.2lf",sum/n);
    delete[] a;
    return 0;
}