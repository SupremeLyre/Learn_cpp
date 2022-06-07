#include<iostream>
#include<cstring>
using namespace std;
bool a[102][102] = {false};
int main()
{
    int n,m;
    cin>>n>>m;
    char temp;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            cin>>temp;
            if(temp=='*')
            {
                a[i][j] = true;
            }
        }
    }
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            if(a[i][j])
            {
                printf("*");
            }
            else
            {
                printf("%d",a[i-1][j]+a[i+1][j]+a[i-1][j-1]+a[i][j-1]+a[i+1][j-1]+a[i-1][j+1]+a[i][j+1]+a[i+1][j+1]);
            }
        }
        cout<<endl;
    }
    return 0;
}