#include<iostream>
using namespace std;
class test
{ 
    int a,b;
    public:
    void getdata()
    {
        cout<<"\n Enter Value of A:";
        cin>>a;
        cout<<"\n Enter Value Of B:";
        cin>>b;
    }
    void show()
    {
        cout<<"\n Value of A:"<<a;
        cout<<"\n Value of B:"<<b;
    }
};
int main()
{
    test t1;
    t1.getdata();
    t1.show();
    return 0;
}