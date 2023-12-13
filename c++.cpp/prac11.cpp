#include<iostream>
using namespace std;
class A
{
    public:
    int sum;
    void getdataA()
    {
        cout<<"**Sum OF Three Digit**";
    }
};
   class B
   {
      public:
      int a,b,c;
      void getdataB()
      {
        cout<<"\n Enter Value Of A:";
        cin>>a;
         cout<<"\n Enter Value Of B:";
        cin>>b;
        cout<<"\n Enter Value Of C:";
        cin>>c;
      }
   };
  class C:public B
  {
    public:
    int d;
    void show()
    {
       d=a+b+c;
       cout<<"Sum="<<d<<endl;

    }
  };
int main()
{
    A obj2;
    C obj1;
    obj2.getdataA();
    obj1.getdataB();
    obj1.show();
    return 0;
}