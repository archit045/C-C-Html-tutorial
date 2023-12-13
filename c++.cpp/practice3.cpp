#include<iostream>
using namespace std;
class mysf
{
    char n[20],fa[20],ma[20],add[20];
    int pin;
    string age,ph;
    public:
    void my()
    {
        cout<<"\n My Name:";
        cin>>n;
        cout<<"\n My Father's Name:";
        cin>>fa;
        cout<<"\n My Mother's Name:";
        cin>>ma;
        cout<<"\n My Age:";
        cin>>age;
        cout<<"\n My Contact Number:";
        cin>>ph;
        cout<<"\n My Address:";
        cin>>add;
        cout<<"\n Pin Code:";
        cin>>pin;
    }
    void show()
    {
          cout<<"\n My Name:"<<n;
          cout<<"\n My Father's Name:"<<fa;
          cout<<"\n My Mother's Name:"<<ma;
          cout<<"\n My Age:"<<age;
          cout<<"\n My Contact Number:"<<ph;
          cout<<"\n My Address:"<<add;
          cout<<"\n Pin Code"<<pin;
    }
};
int main()
{
    mysf my1;
    my1.my();
    my1.show();
    return 0;
}