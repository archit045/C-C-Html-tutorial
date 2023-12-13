#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void getdataA()
    {
        cout<<"\n Enter Value Of A:";
        cin>>a;
    }
};
class B : public A
{
    public:
    int b;
    void getdataB()
    {
        cout<<"\n Enter Value Of B:";
        cin>>b;
    }
};
class C : public B
{
    public:
    int c;
    void multi()
    {
        c=a*b;
        cout<<"\n c="<<c;
    }
};
int main()
{
    C obj1;
    obj1.getdataA();
    obj1.getdataB();
    obj1.multi();
    return 0;
}