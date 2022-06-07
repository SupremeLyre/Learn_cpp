#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 1001;
vector<int> a,da;
int n;
int main()
{
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        a.push_back(t);
    }
    for(int i = 1;i<n;i++)
    {
        da.push_back(abs(a[i] - a[i-1]));
    }
    sort(da.begin(),da.end());
    for(int i = 0;i<da.size();i++)
    {
        if(da[i]!=i+1)
        {
            printf("Not jolly\n");
            return 0;
        }
    }
    printf("Jolly\n");
    return 0;
}