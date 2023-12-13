#include<iostream>
using namespace std;
class test
{
    private:
    int num;
    public:
    test():num(8){}
    void operator ++()
    {
        num=num+2;
    }
    void print()
    {
        cout<<"\n The value of num is:"<<num;
    }
};
int main()
{
    test tt;
    ++ tt;
    tt.print();
    return 0;
}