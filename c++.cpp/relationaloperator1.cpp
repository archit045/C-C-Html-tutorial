#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20,c=30,d=40;
    cout<<"\n (a<b)&&(c!=d):"<<(a<b)&&(c!=d);
    cout<<"\n (a<b)||(c!=d):"<<(a<b)||(c!=d);
    cout<<"\n (!(a<b)):"<<(!(a<b));
    cout<<"\n (!(a>b)):"<<(!(a>b));
    cout<<"\n (!(c<d)):"<<(!(c<d));
    cout<<"\n (!(c>d)):"<<(!(c>d));
}