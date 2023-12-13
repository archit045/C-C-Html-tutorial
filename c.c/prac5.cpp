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
     while(i<4)
    {
        cout<<"the valur of marks "<< i <<" is "<< marks [i] << endl;
        i++;
    }
    cout<<"\nThese are mmarks\n"<<endl;
    int j=0;
    while(j<4)
    {
        cout<<"THe VAlue OF mmarks "<< j <<" is "<< mmarks [j] <<endl;
        j++;
    }
    return 0;
}