#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file1;
    file1.open("file1",ios::out);
    if(!file1)
    {
        cout<<"No Such File!";
    }
    else
    {
      char ch;
      while(1)
      {
         file1>>ch;
       if(file1.eof())
       break;
       cout<<ch;
      }
    }
}