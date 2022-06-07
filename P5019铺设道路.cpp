#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> a;
int tot = 0;
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    for(int i = 1;i<a.size();i++)
    {
        if(a[i]>a[i-1])
        {
            tot+=a[i]-a[i-1];
        }
    }
    cout<<tot+a[0]<<endl;
    return 0;
}