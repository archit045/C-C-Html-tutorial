#include<iostream>
using namespace std;
int main()
{
    int cp,sp,loss,profit;
    cout<<"\n Enter Cost Price And Sale Price:";
    cin>>cp>>sp;
    if(sp>cp)
    {
        profit=sp-cp;
        cout<<"\n Profit="<<profit;
    }
    else if(cp>sp)
    {
        loss=cp-sp;
        cout<<"\n Loss="<<loss;
    }
    else
    {
        cout<<"\n No Profit No Loss";
    }
    return 0;
}