#include<iostream>
using namespace std;
class test
{
    public:
    void add(int a,int b)
    {
       int c=a+b;
       cout<<"\n Addition of 2 int:"<<c;
    }
    float add(float a,float b)
    {
        return(a+b);
    }
    void add(int a,int b,int c)
    {
       int x=a+b+c;
       cout<<"\n Addition of 3 int:"<<x;
    }
};
int main()
{
    test t1;
    float sum;
    t1.add(100,200);
    test t2;
    sum=t2.add(10.20f,5.23f);
    cout<<"\n Addition Of 2 float:"<<sum;
    test t3;
    t3.add(10,20,30);
    return 0;
}