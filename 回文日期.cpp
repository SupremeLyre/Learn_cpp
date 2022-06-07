#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;
const int s=1000,e=8999;
vector<int> arr;
int n;
int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
bool check(int yy,int mm,int dd)
{
    if(mm>=1&&mm<=12)
    {
        if(yy%400==0||(yy%4==0&&yy%100!=0))
        {
            month[2] = 29;//闰年2月
        }
        if(month[mm] >= dd)
            return true;
        else
            return false;
    }
    return false;
}
void init()
{
    for(int i = s;i<=e;i++)
    {
        string s=to_string(i);
        for(int j =3;j>=0;j--)
        {
            s+=s[j];
        }
        int mm = (s[4] - '0')*10+(s[5]-'0');
        int dd = (s[6] - '0')*10+(s[7] - '0');
        if(check(i,mm,dd))
        {
            int k = stoi(s);
            arr.push_back(k);
        }
        month[2] = 28;
    }
}
int main()
{
    
    return 0;
}