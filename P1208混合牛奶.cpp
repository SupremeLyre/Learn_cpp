#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct milk
{
    int p;
    int a;
    int tot;
}farmer[5001];
bool cmp(milk m1,milk m2)
{
    if(m1.p!=m2.p)
        return m1.p<m2.p;
    else
        return m1.a>m2.a;
}
int sum;
int main()
{
    int n,m;
    cin>>n>>m;

    for(int i = 0;i<m;i++)
    {
        cin>>farmer[i].p>>farmer[i].a;
        farmer[i].tot = farmer[i].p*farmer[i].a;
    }
    sort(farmer,farmer+m,cmp);
    int j = 0;
    while(n>farmer[j].a)
    {
        n -= farmer[j].a;
        sum += farmer[j].tot;
        j++;
    }
    sum+= n*farmer[j].p;
    cout<<sum<<endl;
    return 0;
}