#include<iostream>
using namespace std;
class count
{
    public:
    int value;
    int x;
    int a;
    public:
    count():value(5){}
    void operator ++()
    {
        ++value;
    }
    void operator++(int)
    {
        value++;
    }
    void operator--(int)
    {
        value--;
    }
    void operator--()
    {
        --value;
    }
    void getdata()
    {
        x=value;
        cout<<"\n value of x="<<value;
        a=x;
        cout<<"\n value of a="<<x;
    }
   void display()
    {
        cout<<"\n Count:"<<value<<endl;
        //cout<<"\n value of x="<<--value;
        //cout<<"\n value of count="<<--value;
    }
};
int main()
{
    count count1;
    count1 ++;
    count1.display();
    ++count1;
    count1.display();
    count1 --;
    count1.display();
    count1 --;
    count1.display();
    count1.getdata();
    return 0;
}