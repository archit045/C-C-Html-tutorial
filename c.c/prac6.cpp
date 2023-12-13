#include<iostream>
using namespace std;
int main(){
    int marks[4]={23,45,56,89};
    int mmarks[4];
    mmarks[0] =333;
    mmarks[1] =633;
    mmarks[2] =533;
    mmarks[3] =433;
    cout<<"These are marks\n"<<endl;
    marks[2]=455;
    int i=0;
     do
    {
        cout<<"the value of marks "<< i <<" is "<< marks [i] << endl;
        i++;
    }while(i<4);
    cout<<"\nThese are mmarks\n"<<endl;
    int j=0;
   do
    {
        cout<<"THe Value OF mmarks "<< j <<" is "<< mmarks [j] <<endl;
        j++;
    }while(j<4);
    return 0;
}