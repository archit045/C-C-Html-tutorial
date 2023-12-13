#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file1;
    file1.open("file1.c",ios::out);
    if(!file1)
    {
        cout<<"File Not Created";
    }
    else
    {
        cout<<"File Created Successfully";
        file1.close();
    }
    return 0;
}