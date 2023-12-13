#include<iostream>
using namespace std;
class ACompanyDetail
{
    public:
    char cname[20],mname[20],mtype[20],coname[20],coadd[20];
    int mno,phno;
    void companydetail()
    {
        cout<<"\n Company Name:";
        cin>>coname;
        cout<<"\n Company Address:";
        cin>>coadd;
        cout<<"\n Company Contact Number:";
        cin>>phno;
    }
    void acar()
    {
        cout<<"\n Car Name:";
        cin>>cname;
        cout<<"\n Model Name:";
        cin>>mname;
        cout<<"\n Model Type:";
        cin>>mtype;
        cout<<"\n Model Number:";
        cin>>mno;
    }
    void show()
    {
        cout<<"\n Company Name:"<<coname;
        cout<<"\n Company Address:"<<coadd;
        cout<<"\n Company Contact Number:"<<phno;
        cout<<"\n Car Name:"<<cname;
        cout<<"\n Model Name:"<<mname;
        cout<<"\n Model Type:"<<mtype;
        cout<<"\n Model Number:"<<mno;
    }
};
class BCompanyDetail: public ACompanyDetail
{
    public:
    char cname[20],mname[20],mtype[20],coname[20],coadd[20];
    int mno,phno;
    void bcompanydetail()
    {
        cout<<"\n Company Name:";
        cin>>coname;
        cout<<"\n Company Address:";
        cin>>coadd;
        cout<<"\n Company Contact Number:";
        cin>>phno;
    }
    void bcar()
    {
        cout<<"\n Car Name:";
        cin>>cname;
        cout<<"\n Model Name:";
        cin>>mname;
        cout<<"\n Model Type:";
        cin>>mtype;
        cout<<"\n Model Number:";
        cin>>mno;
    }
    void show1()
    {
        cout<<"\n Company Name:"<<coname;
        cout<<"\n Company Address:"<<coadd;
        cout<<"\n Company Contact Number:"<<phno;
        cout<<"\n Car Name:"<<cname;
        cout<<"\n Model Name:"<<mname;
        cout<<"\n Model Type:"<<mtype;
        cout<<"\n Model Number:"<<mno;
    }
};
class CCompanyDetail: public BCompanyDetail
{
    public:
    char cname[20],mname[20],mtype[20],coname[20],coadd[20];
    int mno,phno;
    void ccompanydetail()
    {
        cout<<"\n Company Name:";
        cin>>coname;
        cout<<"\n Company Address:";
        cin>>coadd;
        cout<<"\n Company Contact Number:";
        cin>>phno;
    }
    void ccar()
    {
        cout<<"\n Car Name:";
        cin>>cname;
        cout<<"\n Model Name:";
        cin>>mname;
        cout<<"\n Model Type:";
        cin>>mtype;
        cout<<"\n Model Number:";
        cin>>mno;
    }
    public:
    void show2()
    {
        cout<<"\n Company Name:"<<coname;
        cout<<"\n Company Address:"<<coadd;
        cout<<"\n Company Contact Number:"<<phno;
        cout<<"\n Car Name:"<<cname;
        cout<<"\n Model Name:"<<mname;
        cout<<"\n Model Type:"<<mtype;
        cout<<"\n Model Number:"<<mno;
    }
};
int main()
{
    CCompanyDetail cd1;
    BCompanyDetail cb1;
    ACompanyDetail ca1;
    cd1.ccompanydetail();
    cd1.ccar();
    cd1.show2();
    cb1.bcompanydetail();
    cb1.bcar();
    cb1.show1();
    ca1.companydetail();
    cd1.acar();
    cd1.show();
    return 0;
}