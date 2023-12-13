#include<iostream>
using namespace std;
class base
{
    public:
    int a,b;
    void getbase()
    {
        cout<<"\n Enter Value of a and b:";
        cin>>a>>b;
    }
};
class der : public base
{
public:
int c;
void getsum()
{
    c=a+b;
    cout<<"\n Addition="<<c;   
}
};
int main()
{
    der d;
    d.getbase();
    d.getsum();
    return 0;
}