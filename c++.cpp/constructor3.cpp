//parameterized constructor
#include<iostream>
using namespace std;
class test
{
    int a,b;
    float m;
    char x,s;
    public:
    test(int i,int j,float n,char s)
    {
        cout<<"\n Constructor on Running";
        a=i;
        b=j;
        m=n;
        x=s;
    }
    void show()
    {
        cout<<"\n Value of a:"<<a;
        cout<<"\n Value of b:"<<b;
        cout<<"\n Value of m:"<<m;
        cout<<"\n Value of x:"<<x;
    }
};
int main()
{
    test t(100,200,45.50f,'k');
    t.show();
    return 0;
}