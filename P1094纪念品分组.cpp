#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>a;
int main()
{
    int w;
    cin>>w;
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    int sum = 0;
    int l = 0,r = a.size() - 1;
    int mid = (l+r)>>1;
    while(l<=r)
    {
        if(a[r]+a[l]<=w)
        {
            sum++;
            l++;
            r--;
        }
        else
        {
            sum++;
            r--;
        }
    }
    cout<<sum;
    return 0;
}