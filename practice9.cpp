#include<iostream>
using namespace std;
int main()
{
    int n,i,c,a=1;
    cout<<"\n Enter No Of Rows To Print Floyid Triangle:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(c=1;c<=i;c++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}