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
     for(int i=0;i<4;i++)
    {
        cout<<"the valur of marks "<< i <<" is "<< marks [i] << endl;
    }
    cout<<"\nThese are mmarks\n"<<endl;
    for(int j=0;j<4;j++)
    {
        cout<<"THe VAlue OF mmarks "<< j <<" is "<< mmarks [j] <<endl;
    }
    return 0;
}