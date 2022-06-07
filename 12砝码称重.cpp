#include<iostream>
#include<map>
#include<cmath>
using namespace std;
map<int,int> ma;
map<int,int> temp;
int main()
{
    int n;
    cin>>n;
    int data;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        for(map<int,int>::iterator it=temp.begin();it!=temp.end();it++)
        {
            ma[abs(it->first-data)]++;
            ma[abs(it->first+data)]++;
        }
        ma[data]++;
        temp=ma;
    }
    int sum=ma.size();
    if(ma[0]!=0)
    {
        sum--;
    }
    cout<<sum;
    return 0;
}
