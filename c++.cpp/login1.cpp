#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class facebook
{
   public:
   char first_name[20];
   char last_name[20];
   char email[20];
   char password[20];
   void create()
{
    cout<<"\n Enter Your First Name:";
    cin>>first_name;
    cout<<"\n Enter Your Last Name:";
    cin>>last_name;
    cout<<"\n Enter Your Email Address:";
    cin>>email;
    cout<<"\n Set Your Password:";
    cin>>password;
    cout<<"\n Your FAcebook Account Have Created Successful";
}
void show(){
    cout<<first_name<<" "<<last_name<<endl;
    cout<<"Email :"<<email<<endl;
    cout<<"----------------------------"<<endl;
}
void login()
    {
        cout<<"Hi!"<<first_name<<" "<<last_name<<"Your Login SUccessful"<<endl;
        cout<<"Your Email is:"<<email<<endl;
    }
    void Forgot(){
        system("cls");
        cout<<"Hi!"<<first_name<<" "<<last_name<<"Your Password Is:"<<password<<endl;
    }
};
void start(){
    facebook fb;
    int choice,c;
    {
    cout<<"1.Create Your Facebook Account"<<endl;
    cout<<"2. Login in Your Account"<<endl;
    cout<<"3. Forgot Password"<<endl;
    cout<<"4. See All Facebook Accounts "<<endl;
    cout<<"\n Enter Your Choice:";
    cin>>choice;
    switch(choice){
        case 1:
        {
            system("cls");
            ofstream out;
            out.open("facebook.txt",ios::binary|ios::app);
            if(!out){
                cout<<"\n File not found";
            }
            else{
                fb.create();
                out.write((char*)&fb,sizeof(fb));
                out.close();
            }
            cout<<"\n Press 1 to main choice:";
            cin>>c;
            if(c==1){
                start();
            }
        }
        break;
        case 2:
        {
            system("cls");
            ifstream in("facebook.txt",ios::binary|ios::in);
            if(!in){
                cout<<"\n File Not Found";
            }
            else{
                char srh_email[20];
                char srh_pass[20];
                bool search=false;
                cout<<"Enter Your Email aDDRESS :";
                cin>>srh_email;
                cout<<"Enter Your Password :";
                cin>>srh_pass;
                while(in.read((char*)&fb,sizeof(fb))){
                if(strcmp(srh_email,fb.email)==0&&strcmp(srh_pass,fb.password)==0)
                {
                    fb.login();
                    search=true;
                }
                }
                in.close();
                if(search==false){
                    cout<<"Sorry! Your email or password is wrong\n";
                }
            }
            cout<<"\n Press 1 to main choice ";
            cin>>c;
            if(c==1){
                start();
            }
        }
        break;
        case 3:{
             system("cls");
            ifstream in("facebook.txt",ios::binary|ios::in);
            if(!in){
                cout<<"\n File IS not Found";
            }
            else{
                char srh_email[20];
                bool search=false;
                cout<<"\n Enter your email:";
                cin>>srh_email;
                while(in.read((char*)&fb,sizeof(fb))){
                 if(strcmp(srh_email,fb.email)==0){
                    fb.Forgot();
                    search=true;
                 }
                }
                if(search==false){
                    cout<<"\n Sorry! Your email is wrong";
                }
            }
             cout<<"\n Press 1 to main choice ";
            cin>>c;
            if(c==1){
                start();
            }
        }
        break;
        case 4:{
            system("cls");
            ifstream in("facebook.txt",ios::binary|ios::in);
            if(!in){
                cout<<"\n File IS not Found";
            }
             else{
                while(in.read((char*)&fb,sizeof(fb))){
                    fb.show();
                 }
                }
                 in.close();
                 cout<<"\n Press 1 to main choice ";
                 cin>>c;
                 if(c==1){
                 start();
                }
            }
            break;
            default:
            {
                cout<<"\n Wrong Choice!";

            }
    }
}
};
int main()
{
    start();
     return 0;

}