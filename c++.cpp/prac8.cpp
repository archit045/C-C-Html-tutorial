// pointer and array 
#include<iostream>
using namespace std;
int main(){
    int marks[4]={23,45,56,89};
    cout<<"These are marks\n"<<endl;
    marks[2]=455;
    int*p=marks;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}