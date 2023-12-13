#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    void getdata()
    {
        cout<<"\n Enter VAlur Of A and B:";
        cin>>a>>b;
    }
    void sum()
    {
        int c=a+b;
        cout<<"\n Sum="<<c;
    }
};
int main()
{
    test t;
    t.getdata();
    t.sum();
    return 0;
}