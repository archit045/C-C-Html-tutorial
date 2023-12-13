#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<5;i++)
    {
        if(i==2)
        {
        continue;
        }
        cout<<i<<endl;
    }
    return 0;
}
// Break==Stop The Loop here .
// Continue==Current itreation Stor here and go on Another itreation.....