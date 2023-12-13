// pointer and array 
#include<iostream>
using namespace std;
int main(){
    int marks[5]={23,45,56,89,354};
    cout<<"These are marks\n"<<endl;
    marks[2]=455;
    marks[4]=345;
    int*p=marks;
   {
    cout<<"The VAlue of *p is :"<<*(p++)<<endl;
    cout<<"THe Value OF *(p+1) is :"<<*p<<endl;
    cout<<"THe Value OF *(p+2) is :"<<*(p+1)<<endl;
    cout<<"THe Value OF *(p+3) is :"<<*(p+2)<<endl;
    cout<<"THe Value OF *(p+4) is :"<<*(p+3)<<endl;
   }
    return 0;
}