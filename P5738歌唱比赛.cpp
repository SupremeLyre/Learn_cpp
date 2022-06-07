#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

class Student
{
    public:
    
    void getscore(int m)
    {
        for(int i = 0;i<m;i++)
        {
            cin>>score[i];
        }
    }
    double getSum(int m)
    {
        sort(score,score+m);
        for(int i = 1;i<m-1;i++)
        {
            sum += score[i];
        }
        return sum;
    }
    private:
    int sum = 0;
    int score[20];
};
int main()
{
    int n,m;
    cin>>n>>m;
    Student stu[n];
    double result = 0;
    for(int i = 0;i<n;i++)
    {
        stu[i].getscore(m);
        double mean = stu[i].getSum(m)/(m-2);
        result = max(result,mean);
    }
    printf("%.2lf",result);
    return 0;
}