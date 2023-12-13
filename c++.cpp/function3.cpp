// With Written Type Argument
#include<iostream>
using namespace std;
int main()
{
    int add(int,int);
    int sum; 
    int a,b;
    cout<<"\n Enter Value Of A and B:";
    cin>>a>>b;
    sum=add(a,b);
    cout<<"\n Back To main()";
    cout<<"\n Addition="<<sum;
    return 0;
}
 int add(int a,int b)
{
   int c;
   cout<<"\n Inside add()";
   c=a+b;
   return (c);
}