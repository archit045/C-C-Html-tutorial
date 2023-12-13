// Hybrid Inheritance With Ambiguilty
#include<iostream>
using namespace std;
class A
{
    public:
    int x,y;
    void getA()
    {
        cout<<"\n Enter Value Of X and y:";
        cin>>x>>y;   
    }
};
class B:  public A
{
    public:
    void product()
    {
       cout<<"\n product="<<x*y;
    }
};
class C :public A
{
    public:
    void sum()
    {
        cout<<"\n sum="<<x+y;
    }
};
 int main()
 {
    B obj1;
    C obj2;
    obj1.getA();
    obj1.product();
    obj2.getA();
    obj2.sum();
    return 0;
 }