#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    void getx()
    {
        cout<<"\n Enter Value Of X:";
        cin>>x;
    }
};
class B
{
    public:
    int y;
    void gety()
    {
        cout<<"\n Enter Value Of B:";
        cin>>y;
    }
};
class C : public A,public B
{
    public:
    void sum()
    {
        cout<<"\n sum="<<x+y;
    }
};
int main()
{
    C obj1;
    obj1.getx();
    obj1.gety();
    obj1.sum();
    return 0;
}