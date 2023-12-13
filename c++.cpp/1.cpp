#include<iostream>
using namespace std;
class add
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
       c=a+b;
    }
     void show()
     {
        cout<<"\n Addition="<<c;
     }
};
int main()
{
    add obj;
    obj.getdata();
    obj.calculate();
    obj.show();
    return 0;
}