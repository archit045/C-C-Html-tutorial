#include<iostream>
using namespace std;
int main()
{
    int a=30,b=20,c=30,d=40,x;
    x=a;
    cout<<"\n Value of x=:"<<x;
    x=50;
    cout<<"\n Value of x="<<x;
    x=a+b;
    cout<<"\n Value Of x"<<x;
    a++;
    cout<<"\n Value of a++:"<<a;
    ++a;
    cout<<"\n Value of ++a:"<<a;
    a--;
    cout<<"\n Value of a--:"<<a;
    x=a++;
    cout<<"\n Value of x=:"<<x;
    cout<<"\n Value Of a=:"<<a;
    x=++a;
    cout<<"\n Value of x:"<<x;
    cout<<"\n Value Of a=:"<<a;
    (a>b)?
    cout<<"\n a is max:":cout<<"\n b is max:";
    (b<a)?
    cout<<"\n a is max:":cout<<"\n b is max:";
}