#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int A,B,C;
    int a1,a2,a3;
    int b1,b2,b3;
    int c1,c2,c3;
    int ok = 0;
    for(A = 123;A<=987;A++)
    {
        a1 = A/100;
        a2 = A/10%10;
        a3 = A%10;
        B = A*b/a;
        b1 = B/100;
        b2 = B/10%10;
        b3 = B%10;
        C = A*c/a;
        c1 = C/100;
        c2 = C/10%10;
        c3 = C%10;
        if(a1!=a2&&a1!=a3&&a1!=b1&&a1!=b2&&a1!=b3&&a1!=c1&&a1!=c2&&a1!=c3
        &&a2!=a3&&a2!=b1&&a2!=b2&&a2!=b3&&a2!=c1&&a2!=c2&&a2!=c3
        &&a3!=b1&&a3!=b2&&a3!=b3&&a3!=c1&&a3!=c2&&a3!=c3
        &&b1!=b2&&b1!=b3&&b1!=c1&&b1!=c2&&b1!=c3
        &&b2!=b3&&b2!=c1&&b2!=c2&&b2!=c3
        &&b3!=c1&&b3!=c2&&b3!=c3
        &&c1!=c2&&c2!=c3
        &&c2!=c3
        &&a1*a2*a3*b1*b2*b3*c1*c2*c3 == 1*2*3*4*5*6*7*8*9
        &&C<=987)
        {
            ok = 1;
            printf("%d %d %d\n",A,B,C);
        }        
    }
    if(!ok)
        printf("No!!!");
    return 0;
}