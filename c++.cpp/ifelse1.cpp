#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"\n Enter Two VAlues:";
    cin>>n1>>n2;
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