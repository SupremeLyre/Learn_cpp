#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[101];
    for(int i = 0;i< n;i++)
    {
        cin>>a[i];
    }
    for (int i = 0;i < n;i++)
    {
        int d = 0;
        for(int j = 0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                d++;
            }
        }
        cout<<d<<" ";
    }
    return 0;
}