#include <iostream>
using namespace std;
class Point
{
private:
    double x;
    double y;

public:
    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void Set(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void Move(double x, double y)
    {
        this->x += x;
        this->y += y;
    }
    void Output()
    {
        cout << x << "," << y << endl;
    }
};
int main()
{
    Point pt(0, 0);
    pt.Set(1, 2);
    pt.Output();
    pt.Move(3, 4);
    pt.Output();
    return 0;
}