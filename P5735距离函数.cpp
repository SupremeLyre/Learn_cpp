#include<iostream>
#include<cmath>

using namespace std;

class triangle
{
    private:
    double xy[3][2];
    public:
    triangle(double x1,double y1,double x2,double y2,double x3,double y3)
    {
        xy[0][0] = x1;
        xy[0][1] = y1;
        xy[1][0] = x2;
        xy[1][1] = y2;
        xy[2][0] = x3;
        xy[2][1] = y3;
    }
    void distance(triangle t) 
    {
        double dis = sqrt(pow(t.xy[0][0]-t.xy[1][0],2)+pow(t.xy[0][1]-t.xy[1][1],2))
        +sqrt(pow(t.xy[0][0]-t.xy[2][0],2)+pow(t.xy[0][1]-t.xy[2][1],2))
        +sqrt(pow(t.xy[1][0]-t.xy[2][0],2)+pow(t.xy[1][1]-t.xy[2][1],2));
        printf("%.2lf",dis);
    }

};
int main()
{
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    triangle t(x1,y1,x2,y2,x3,y3);
    t.distance(t);
}