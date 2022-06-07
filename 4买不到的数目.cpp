#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    //最小的不能写成a*i+b*j的数
    cout<<a*b-a-b<<endl;
    return 0;
}