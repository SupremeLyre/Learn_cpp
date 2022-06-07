#include<iostream>
#include<vector>
using namespace std;
vector <int> leap{};
bool isLeap(int n)
{
    if((n%4==0&&n%100!=0)||n%400==0)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int x,y;
    int total = 0;
    scanf("%d%d",&x,&y);
    for(int i = x;i<=y;i++)
    {
        if(isLeap(i))
        {
            total++;
            leap.push_back(i);
        }
    }
    cout<<total<<endl;
    for(int i = 0;i<leap.size();i++)
    {
        printf("%d ",leap[i]);
    }
    return 0;
}