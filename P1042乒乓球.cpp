#include<iostream>
#include<string>
using namespace std;
int win[65535] = {0};
int w,l;
void score(int rule)
{
    int i = 1;
    while(true)
    {
        if(win[i]==1)
        {
            w++;
        }
        else if(win[i]==2)
        {
            l++;
        }
        else if(win[i]==0)
        {
            cout<<w<<":"<<l<<endl;
            break;
        }
        if(abs(w-l)>=2&&max(l,w)>=rule)
        {
            cout<<w<<":"<<l<<endl;
            w = 0;
            l = 0;
        }
        i++;
    }
}
int main()
{
    char s;
    for(int i = 1;cin>>s,s!='E';i++)
    {
        if(s=='W')
        {
            win[i] = 1;
        }
        else
        {
            win[i] = 2;
        }
    }
    score(11);
    cout<<endl;
    w = 0;l = 0;
    score(21);
    return 0;
}