#include<iostream>
using namespace std;
class Car1
{
    public:
    char com[10],car1[10],model1[10];
    void getx()
    {
        cout<<"\n Enter The Company Name:";
        cin>>com;
        cout<<"\n Enter Name Of First car:";
        cin>>car1;
        cout<<"\n Enter model Of first car:";
        cin>>model1;
    }
};
class Car2
{
    public:
    char com1[10],car2[10],model2[10];
    void gety()
    {
         cout<<"\n Enter The Company Name:";
        cin>>com1;
        cout<<"\n Enter Name Of Second car:";
        cin>>car2;
        cout<<"\n Enter model Of second car:";
        cin>>model2;
    }
};
class Car3
{
   public:
    char com2[10],car3[10],model3[10];
    void getz()
    {
       cout<<"\n Enter The Company Name:";
       cin>>com2;
       cout<<"\n Enter Name Of Third car:";
       cin>>car3;
       cout<<"\n Enter model Of third car:";
       cin>>model3;
    } 
};
class C : public Car1,public Car2,public Car3
{
    public:
    void Show()
    {
        cout<<"\n ***List OF The Cars won First second and Third Prize of the year 2022***"<<endl;
        cout<<"\n **First PRize Won By**"<<endl;
        cout<<"\n Name OF The Company:"<<com;
        cout<<"\n Name Of The Car:"<<car1;
        cout<<"\n Model Of The Car:"<<model1<<endl;
        cout<<"\n **Second PRize Won By**"<<endl;
        cout<<"\n Name OF The Company:"<<com1;
        cout<<"\n Name Of The Car:"<<car2;
        cout<<"\n Model Of The Car:"<<model2<<endl;
        cout<<"\n **Third PRize Won By**"<<endl;
        cout<<"\n Name OF The Company:"<<com2;
        cout<<"\n Name Of The Car:"<<car3;
        cout<<"\n Model Of The Car:"<<model3;
    }
};
int main()
{
    C obj1;
    obj1.getx();
    obj1.gety();
    obj1.getz();
    obj1.Show();
    return 0;
}