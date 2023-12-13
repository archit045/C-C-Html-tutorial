//constructor overloading/multiple constructor/constructorwith multiple argument
#include<iostream>
using namespace std;
class test
{
    int a,b;
    float c;
    char k;
    public:
    test()
    {
        cout<<"\n Default Constructor with no arguments";
    }
     test(int i,int j,float n,char s)
     {
        cout<<"\n Constructor with 4 argument";
        a=i;
        b=j;
        c=n;
        k=s;
    }
        test(float n, char s)
        {
        cout<<"\n Constructor with 2 argument";
        c=n;
        k=s;
        }
        test(int i,int j)
        {
            cout<<"\n Constructor with 2 argument";
            a=i;
            b=j;
        }
         test(int i,int j,float n)
        {
            cout<<"\n Constructor with 3 argument";
            a=i;
            b=j;
            c=n;
        }
    void show()
    {
        cout<<"\n Value of a=:"<<a;
        cout<<"\n Value of b=:"<<b;
        cout<<"\n Value of c=:"<<c;
        cout<<"\n Value of k=:"<<k;
    }
    void show1()
    {
        cout<<"\n Value of c=:"<<c;
        cout<<"\n Value of k=:"<<k;
    }
    void show2()
    {
        cout<<"\n Value of a=:"<<a;
        cout<<"\n Value of b=:"<<b;
    }
     void show3()
    {
        cout<<"\n Value of a=:"<<a;
        cout<<"\n Value of b=:"<<b;
        cout<<"\n Value of c=:"<<c;
    }
};
int main()
{
    test t1;
    t1.show();
    test t2(555,666,45.45f,'k');
    t2.show();
    test t3(33.45f,'a');
    t3.show1();
    test t4(45,50);
    t4.show2();
    test t5(100,200,45.54f);
    t5.show3();
    return 0;
}