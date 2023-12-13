// pointer and array 
#include<iostream>
using namespace std;
int main(){
    char marks[12]={'A','R','C','H','I','T','T','H','A','K','U','R'};
    cout<<"These are marks\n"<<endl;
    char*p=marks;
    cout<<"The VAlue of *p   is    :"<<*(p++)<<endl;
    cout<<"THe Value OF *(p+1)  is :"<<*p<<endl;
    cout<<"THe Value OF *(p+2)  is :"<<*(p+1)<<endl;
    cout<<"THe Value OF *(p+3)  is :"<<*(p+2)<<endl;
    cout<<"THe Value OF *(p+4)  is :"<<*(p+3)<<endl;
    cout<<"THe Value OF *(p+5)  is :"<<*(p+4)<<endl;
    cout<<"THe Value OF *(p+6)  is :"<<*(p+5)<<endl;
    cout<<"THe Value OF *(p+7)  is :"<<*(p+6)<<endl;
    cout<<"THe Value OF *(p+8)  is :"<<*(p+7)<<endl;
    cout<<"THe Value OF *(p+9)  is :"<<*(p+8)<<endl;
    cout<<"THe Value OF *(p+10) is :"<<*(p+9)<<endl;
    cout<<"THe Value OF *(p+11) is :"<<*(p+10)<<endl;
    return 0;
}