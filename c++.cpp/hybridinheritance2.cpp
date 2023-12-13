// Hybrid Inheritance With Ambiguilty
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void getA()
    {
        cout<<"\n Enter Value Of A:";
        cin>>a;   
    }
};
class B: virtual public A
{
    public:
    int b;
    void getB()
    {
       cout<<"\n Enter Value Of B:";
       cin>>b;  
    }
};
class C :virtual public B
{
    public:
    int c;
    void getC()
    {
        cout<<"\n Enter Value Of C:";
        cin>>c;   
    }
};
class D:virtual public C
{
    public:
    int d;
    void getD()
    {
      cout<<"\n Enter Value Of D:";
      cin>>d; 
    }
};
class E:virtual public D
{
    public:
    void show()
    {
        cout<<"\n VAlue Of A="<<a;
        cout<<"\n VAlue Of B="<<b;
        cout<<"\n VAlue Of C="<<a;
        cout<<"\n VAlue Of D="<<d;
    }
};
int main()
{
    E d1;
    d1.getA();
    d1.getB();
    d1.getC();
    d1.getD();
    d1.show();
    return 0;
}