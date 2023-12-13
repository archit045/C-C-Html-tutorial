//constructor with default argument
#include<iostream>
using namespace std;
class test
{
    int a,b;
    float m;
    char x,s;
    public:
    test(float n,char s,int i=100,int j=200)
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
    test t(45.50f,'k',555,666);
    t.show();
    return 0;
}