#include<iostream>
using namespace std;
class school
{
    private:
    int scode;
    char sname[20];
    public:
    void getdetails()
    {
        cout<<"\n Enter School Code,School Name";
        cin>>scode>>sname;
    }
    void show()
    {
        cout<<"\n School Code="<<scode;
        cout<<"\n School Name="<<sname;
    }
};
class student : public school
{
   private:
   int rno;
   char stname[10];
   int fees;
   public:
   void getdetails()
   {
     cout<<"\n Enter Roll Number,NAme,Fees";
     cin>>rno>>stname>>fees;
   }
   void show()
   {
    cout<<"\n Roll Number="<<rno;
    cout<<"\n Student Name="<<stname;
    cout<<"\n Fees="<<fees;
   }
};
int main()
{   
    school s2;
    student s1;
    s2.getdetails();
    s2.show();
    s1.getdetails();
    s1.show();
    return 0;
}