#include<iostream>
using namespace std;
class sub
{
    int a,b,c;
    public:
    void getdata()
    {
        cout<<"\n Enter Value Of A:";
        cin>>a;
        cout<<"\n Enter Value Of B:";
        cin>>b;
    }
    void calculate()
    {
        c=a-b;
    }
    void show()
    {
        cout<<"\n Substraction of A and B="<<c;
    }
    void show1()
    {
        cout<<"\n Value Of A:"<<a;
        cout<<"\n Valur OF B:"<<b;
        cout<<"\n Value Of C:"<<c;
    }
};
int main()
{
    sub obj;
    obj.getdata();
    obj.calculate();
    obj.show();
    obj.show1();
    return 0;
}