#include<iostream>
using namespace std;
class myself
{
    public:
    char myna[20];
    int age;
    string phno;
    void getmy()
    {

        cout<<"\n MY Name:";
        cin>>myna;
        cout<<"\n My Age:";
        cin>>age;
        cout<<"\n MY Phone Number:";
        cin>>phno;
        
           
    }
};
  class family : public myself
  {
    public:
    char faname[20];
    char maname[20];
    void fam()
    {   
        cout<<"\n Enter Father's  Name:";
        cin>>faname;
        cout<<"\n Enter Mother's Name:";
        cin>>maname;
    }
  };
    class address : public family
    {   
        public:
        char load[20];
        int hou;
        char city[20];
        char dis[20];
        char sta[20]; 
        int pin;
        void add()
        {   
            cout<<"\n Enter Local Address:";
            cin>>load;
            cout<<"\n Enter House Number:";
            cin>>hou;
            cout<<"\n Enter City:";
            cin>>city;
            cout<<"\n Enter District:";
            cin>>dis;
            cout<<"\n Enter State:";
            cin>>sta;
            cout<<"\n Enter Pin:";
            cin>>pin;
        }
    };
    int main()
    {
        address a;
        a.getmy();
        a.fam();
        a.add();
        return 0;
    }