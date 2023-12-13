#include<iostream>
using namespace std;
class shape
{
    public:
    void virtual area()=0;
};
class cir : public shape
{
    public:
    float r;
    void area()
    {
        cout<<"\n Enter Radius:";
        cin>>r;
        float a=3.14*r*r;
        cout<<"\n Area Of Circle:"<<a;
    }
};
class tri : public shape
{
    public:
    int b,h;
    void area()
    {
        cout<<"\n Enter Base and Height:";
        cin>>b>>h;
        float a=0.5*b*h;
        cout<<"\n Area Of Triangel:"<<a;
    }
};
class rect : public shape
{
    public:
    int l,bd;
    void area()
    {
        cout<<"\n Enter Length and Breadth:";
        cin>>l>>bd;
        float a=l*bd;
        cout<<"\n Area Of Rectangl:"<<a;
    }
};
int main()
{
    shape *p;
    cir c;
    p=&c;
    p->area();
    tri t;
    p=&t;
    p->area();
    rect r;
    p=&r;
    p->area();
    return 0;
}