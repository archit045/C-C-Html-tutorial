#include<iostream>
using namespace std;
class circle
{
    public:
    static int count;
    double radius;
    public:
    circle (double r=1.0)
    {
        radius=r;
        count++;
    }
    double getArea()
    {
        return 3.14*radius*radius;
    }
    static int getcount()
    {
        return count;
    }
};
int circle::count=0;
int main()
{
    circle c1(3.3);
    circle c2(4.3);
    circle c3(5.3);
    cout<<"\n Total Object:"<<circle::count<<endl;
}