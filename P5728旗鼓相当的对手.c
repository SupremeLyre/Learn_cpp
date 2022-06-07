#include<stdio.h>
#include<math.h>
const int MAX = 1001;
struct score
{
    int Chinese;
    int Math;
    int English;
    int sum;
}student[MAX];
int main()
{
    int n;scanf("%d",&n);
    int ans = 0;
    for(int i = 1;i<=n;i++)
    {
        scanf("%d%d%d",&student[i].Chinese,&student[i].Math,&student[i].English);
        student[i].sum += (student[i].Chinese+student[i].Math+student[i].English);        
    }
    for(int i = 1;i<=n;i++)
    {
        for(int j = i+1;j<=n;j++)
        {
            if(abs(student[i].Chinese-student[j].Chinese)<=5&&abs(student[i].Math-student[j].Math)<=5&&abs(student[i].English-student[j].English)<=5&&abs(student[i].sum-student[j].sum)<=10)
                ans++;
        }
    }
    printf("%d",ans);
    return 0;
}