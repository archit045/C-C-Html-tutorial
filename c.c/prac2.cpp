// Pointer==Pointer Is a datatype Which Holds The Address of other datatypes.......
#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b=&a;
    // Address OF opreator....
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    // defrence opreator
     cout<<"The value at a is "<<*b<<endl;
     //Pointer to pointer
     int **c=&b;
     cout<<"The address of b is "<<b<<endl;
     cout<<"The value at address c is  "<<c<<endl;
     cout<<"The value at address value at(value at(c)) is "<<**c<<endl;
    return 0;
}
// &== Address Of opreator.......
//*==VAlue at defrence opreator\
//**==Stores address of pointer 