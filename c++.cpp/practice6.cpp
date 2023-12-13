#include<iostream>
using namespace std;
class A
{
    private:
    int a,b,c,s;
    float t;
    double k;
    public:
    void sum()
    {
        cout<<"\n Enter Value Of A And B:";
        cin>>a>>b;
        c=a*b;
        cout<<"\n sum of a and b="<<c;
    }
       int sum(int a,int b)
       {
        return (a*b);
       }
       void sum(float a,float b)
       {
         t=a+b;
         cout<<"\n sum of float a and b="<<t;
       }
       double sum(double a,double b)
       {
           return (a+b);
       }
};
int main()
{
    A obj1;
    int sum1;
    double sum2;
    obj1.sum(5,8);
    sum1=obj1.sum(5,8);
    cout<<"\n Addition of int arguments="<<sum1;
    obj1.sum(12.5f,2.1f);
    obj1.sum(12.57,3.89);
    sum2=obj1.sum(12.57,3.89);
    cout<<"\n Addition of double arguments="<<sum2;
    return 0;
}