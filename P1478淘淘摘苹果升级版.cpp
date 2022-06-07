#include<iostream>
#include<algorithm>
using namespace std;
int n,s,a,b;
struct apple
{
    int xi;
    int yi;
}ap[5001];
int cmp(apple a,apple b)
{
    return a.yi<b.yi;
}
int main()
{
    cin>>n>>s;
    cin>>a>>b;
    int x_i,y_i,can;
    for(int i = 1;i<=n;i++)
    {
        
        cin>>x_i>>y_i;
        if(x_i<=a+b)
        {
            
            can++;
            ap[can].xi = x_i;
            ap[can].yi = y_i;    
        }
    }
    sort(ap+1,ap+can+1,cmp);
    int rest = s;
    int ans = 0;
    for(int i = 1;rest>=ap[i].yi&&i <= can;i++)
    {
        ans++;
        rest-=ap[i].yi;
    }
    printf("%d",ans);
    return 0;
}