#include<stdio.h>

#define W_MEM(x,y,z) (w_mem[x][y][z] ? w_mem[x][y][z] : w_mem[x][y][z] = w(x, y, z))

int w_mem[25][25][25];

int w(int a, int b, int c){
    if(a<=0 || b<=0 || c<=0) return 1;
    if(a > 20 || b > 20 || c > 20) return W_MEM(20,20,20);
    if(a < b && b < c) return W_MEM(a,b,c-1)+W_MEM(a,b-1,c-1) - W_MEM(a,b-1,c);
    return W_MEM(a-1,b,c)+W_MEM(a-1,b-1,c)+W_MEM(a-1,b,c-1) - W_MEM(a-1,b-1,c-1);
}
int main()
{
    long long a=0,b=0,c=0;
    while(1)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a==-1&&b==-1&&c==-1)
            break;
        printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
    }
    return 0;
}