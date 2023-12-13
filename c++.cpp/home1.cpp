#include<iostream>
using namespace std;
class employee
{
    public:
    char empna[20];
    int salary;
    void gettemp()
    {
        cout<<"\n Enter Employee Name:";
        cin>>empna;
        cout<<"\n Enter Employee Salary:";
        cin>>salary;     
    }
};
  class manager : public employee
  {
    public:
    char maname[20];
    char depname[20];
    char depcity[20];
    void getmana()
    {   
        cout<<"\n Enter Manager Name:";
        cin>>maname;
        cout<<"\n Enter Department Name:";
        cin>>depname;
        cout<<"\n Enter Department city:";
        cin>>depcity;
    }
  };
    class supervisor : public manager
    {   
        public:
        char prona[20];
        char produ[20];
        void getsup()
        {   
            cout<<"\n Enter Project Name:";
            cin>>prona;
            cout<<"\n Enter Project Duration:";
            cin>>produ;
        }
    };
    int main()
    {
        supervisor m;
        m.gettemp();
        m.getmana();
        m.getsup();
        return 0;
    }