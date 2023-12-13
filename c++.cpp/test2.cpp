#include<iostream>
using namespace std;
class Add
{
    int a,b,c;
    public:
    void getdata()
    {
        cout<<"\n Enter Value OF A:";
        cin>>a;
        cout<<"\n Enter Value OF B:";
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
    Add obj1;
    obj1.getdata();
    obj1.calculate();
    obj1.show();
    return 0;
}