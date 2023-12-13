// With No Written Type and No Argument
#include<iostream>
using namespace std;
class A
{
 public:
 void add()
{
   int a,b,c;
   cout<<"\n Enter Value Of A and B:";
   cin>>a>>b;
   c=a+b;
   cout<<"\n Addition=="<<c;
}
void sub()
{
    int a,b,m;
   cout<<"\n Enter Value Of A and B:";
   cin>>a>>b;
   m=a-b;
   cout<<"\n Substraction="<<m;
}
void muti()
{
    int a,b,d;
   cout<<"\n Enter Value Of A and B:";
   cin>>a>>b;
   d=a*b;
   cout<<"\n Multiplication="<<d;
}
void div()
{
    int a,b,e;
   cout<<"\n Enter Value Of A and B:";
   cin>>a>>b;
   e=a/b;
   cout<<"\n Division="<<e;
}
void mod()
{
    int a,b,f;
   cout<<"\n Enter Value Of A and B:";
   cin>>a>>b;
   f=a%b;
   cout<<"\n Module="<<f;
}
};
int main()
{
    A obj1;
    obj1.add();
    obj1.sub();
    obj1.muti();
    obj1.div();
    obj1.mod();
    return 0;
}
