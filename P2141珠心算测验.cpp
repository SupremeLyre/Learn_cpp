#include<cstdio>
#include<iostream>
using namespace std;
const int M = 200001;
int t[M],g[M];
int n,a[101],ans;
int main(){
    cin>>n;
    for (int i=1;i<=n;i++){
        cin>>a[i];
        g[a[i]]=1;
    }
    for (int i=1;i<n;i++){//枚举
        for (int j=i+1;j<=n;j++){
            t[a[i]+a[j]]++;//被加出来了
        }
    }
    for (int i=1;i<=M;i++){
        if (t[i]>0&&g[i]) ans++;//判断是否满足，满足ans++
    }
    cout<<ans<<endl;
    return 0;
}
