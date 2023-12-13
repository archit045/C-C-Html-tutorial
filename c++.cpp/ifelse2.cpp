#include<iostream>
using namespace std;
class iff
{
    int n1,n2;
    public:
    void input()
    {
        cout<<"\n Enter Value:";
        cin>>n1>>n2;
    }
void check()
    {
     if(n1>n2)
      {
        cout<<"\n Number "<<n1<<" is maximum";
       }
    if(n1<n2)
    {
        cout<<"\n Number "<<n2<<" is maximum";
    }
    if(n1==n2)
    {
        cout<<"\n Number "<<n1<<" and "<<n2<<" is equal";
    }
    }
};
int main()
{
    iff obj;
    obj.input();
    obj.check();
    return 0;
}