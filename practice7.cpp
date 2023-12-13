#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter Any Number:";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<"\n"<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}