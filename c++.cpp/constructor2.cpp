//parameterized constructor
#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    test(int i,int j)
    {
        cout<<"\n Constructor on Running";
        a=i;
        b=j;
    }
    void show()
    {
        cout<<"\n Value of a:"<<a;
        cout<<"\n Value of b:"<<b;
    }
};
int main()
{
    test t(100,200);
    t.show();
    return 0;
}