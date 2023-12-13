#include<iostream>
#include<string.h>
using namespace std;
class Login
{
    protected:
    char username[20];
    char password[20];
    public:
    Login()
    {
        strcpy(username,"Archit");
        strcpy(password,"Archit123");
    }
};
   class Bank: public Login
{
    int amt,bal,ch,flag;
    char choice;
    char user[20];
    char pass[20];
    public:
    Bank()
{
    bal=5000;
    flag=0;
}
  int checkLogin()
  {
    cout<<"Enter The Username:";
    cin.getline(user,19);
    cout<<"Enter The Password:";
    cin.ignore();
    cin.getline(pass,19);
    if(!((strcmp(user,username))&&(strcmp(pass,password))))
      {
        flag=1;
      }
    else
    {
        flag=0;
    }
    return flag;
  }
  void menu()
  {
    int f,ch;
    f=checkLogin();
    if(f==1)
    {
        cout<<"\npress 1 for deposit";
        cout<<"\npress 2 for withdrawal";
        cout<<"\npress 3 for check balance";
        cout<<"\n Enter Your Choice:";
        cin>>ch;
        switch (ch)
        {
            case 1:
            deposit();
            break;
            case 2:
            withdrawal();
            break;
            case 3:
            checkbalance();
            break;
            default:
            cout<<"invalid choice";
        }
    }
    else
    {
        cout<<"Login fail";
    }
  }
     void deposit()
     {
        cout<<"Enter Amount to be deposited";
        cin>>amt;
        if(amt>0)
        {
          cout<<"amount deposited="<<amt;
          bal=bal+amt;
          cout<<"total balance="<<bal;
        }
     }
     void withdrawal()
       {
         cout<<"Enter Amount to be withdrawal:";
         cin>>amt;
         if(amt>0 && amt<=bal)
         {
            cout<<"amount withdrawal="<<amt;
            bal=bal-amt;
            cout<<"\ntotal balance="<<bal;
         }
       }
       void checkbalance()
       {
        cout<<"total balance="<<bal;
       }
};
  int main()
  {
    Bank ob;
    ob.menu();
    return 0;

  }