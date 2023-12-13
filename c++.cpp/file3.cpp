#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char data[100];
    ofstream outfile;
    outfile.open("file1.c",ios::out);
    if(!outfile)
    {
        cout<<"Writing To File"<<endl;
        cout<<"\n Enter your Name:";
        cin.getline(data,100);
        outfile<<data<<endl;
        cout<<"\n Enter Your Age:";
        cin>>data;
        cin.ignore();
        outfile<<data<<endl;
        outfile.close();
        ifstream infile;
        infile.open("file1.c");
        cout<<"\n Read From File"<<endl;
        infile>>data;
        cout<<data<<endl;
        infile>>data;
        cout<<data<<endl;
        infile.close();
        return 0;
    }
}