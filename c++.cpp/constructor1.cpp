// constructor without parameter/argument 
#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test()
    {
        cout<<"\n Constructor on Running";
        a=10;
        b=20;
    }
    void show()
    {
        cout<<"\n Value of a:"<<a;
        cout<<"\n Value of b:"<<b;
    }
};
int main()
{
    test t;
    t.show();
    return 0;
}