#include<iostream>
#include<algorithm>
using namespace std;
class node 
{
    public:
    int num;
    int rt;
}s[101];
bool cmp(node s1,node s2)
{
    return s1.rt!=s2.rt?s1.rt>s2.rt:s1.num<s2.num;
}
int s1,s2,s3;
int main()
{
    scanf("%d%d%d",&s1,&s2,&s3);
    for(int i = 1;i<=100;i++)
    {
        s[i].num = i;
    }
    for(int i = 1;i<=s1;i++)
    {
        for(int j = 1;j<=s2;j++)
        {
            for(int k = 1;k<=s3;k++)
            {
                s[i+j+k].rt++;
            }
        }
    }
    sort(s+1,s+100,cmp);
    printf("%d",s[1].num);
    return 0;
}