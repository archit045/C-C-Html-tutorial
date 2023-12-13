// With Written Type No Argument
#include<iostream>
using namespace std;
int main()
{
    int add();
    int sum;
    sum=add();
    cout<<"\n Addition="<<sum;
    return 0;
}
 int add()
{
   int a,b,c;
   cout<<"\n Inside add()";
   cout<<"\n Enter Value Of A and B:";
   cin>>a>>b;
   c=a+b;
   return (c);
}