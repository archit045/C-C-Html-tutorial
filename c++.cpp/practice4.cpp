#include<iostream>
using namespace std;
class CompanyDetail
{
    char cname[20],cadd[20],cfiel[20];
    int pin;
    public:
    void codeta()
    {
        cout<<"\n Company Name:";
        cin>>cname;
        cout<<"\n Company Address:";
        cin>>cadd;
        cout<<"\n Manfacture Field:";
        cin>>cfiel;
    }
    void show()
    {
        cout<<"\n Company Name:"<<cname;
        cout<<"\n Company Address:"<<cadd;
        cout<<"\n Manufacture Field:"<<cfiel;
    }
};
class CompanyEmployee: public CompanyDetail
{
    char empname[20],empadd[20];
    int emppin;
    string emppho,empid;
    public:
    void empdet()
    {
        cout<<"\n Employee Name:";
        cin>>empname;
        cout<<"\n Employee Address:";
        cin>>empadd;
        cout<<"\n Employee Phone Number:";
        cin>>emppho;
        cout<<"\n Employee ID:";
        cin>>empid;
        cout<<"\n City Pincode:";
        cin>>emppin;
    }
    public:
    void show1()
    {   
         cout<<"\n Employee Name:"<<empname;
         cout<<"\n Employee Address :"<<empadd;
         cout<<"\n Employee Phone Number:"<<emppho;
         cout<<"\n Employee ID:"<<empid;
         cout<<"\n City Pincode:"<<emppin;
    }
};
int main()
{
    CompanyDetail cd1;
    CompanyEmployee ce1;
    cd1.codeta();
    cd1.show();
    ce1.empdet();
    ce1.show1();
    return 0;
}
