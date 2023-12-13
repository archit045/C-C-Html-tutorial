#include<iostream>
using namespace std;
int main(){
    int marks[4]={23,45,56,89};
    int mmarks[4];
    mmarks[0] =333;
    mmarks[1] =633;
    mmarks[2] =533;
    mmarks[3] =433;
    cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl; 
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl; 
    cout<<marks[3]<<endl;
    // Change Value of array 
    mmarks[2]=455;
    cout<<"These are mmarks"<<endl;
    cout<<mmarks[0]<<endl;
    cout<<mmarks[1]<<endl;
    cout<<mmarks[2]<<endl;
    cout<<mmarks[3]<<endl;
    return 0;
}