#include<iostream>
#include<string>
using namespace std;
int a[26] = {0};
int main()
{
    string s[4];
    for(int i = 0;i<4;i++)
    {
        getline(cin,s[i]);
    }
    for(int i = 0;i<4;i++)
    {
        for(int j = 0;j<s[i].length();j++)
        {
            if(s[i][j]>='A'&&s[i][j]<='Z')
            {
                a[s[i][j]-'A']++;
            }
        }
    }
    int max = a[0];
    for(int i = 1;i<26;i++)
    {
        max = max>a[i]?max:a[i];
    }
    while(max!=0)
    {
        for(int i = 0;i<26;i++)
        {
            if(a[i]-max<0)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
        max--;
    }
    for(int i = 0;i<26;i++)
    {
        cout<<(char)(i+65)<<" ";
    }
    return 0;
}