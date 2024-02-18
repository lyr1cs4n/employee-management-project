#include "employee.h"

employee::employee()
{
    dep=new department();
}
void employee::getinfo()
{
    cout<<endl;
    cout<<"    Enter Name : ";
    cin.ignore();
    getline(cin,name);
    cout<<endl;
    cout<<"    Enter Phone : ";
    getline(cin,phone);
    cout<<endl;
    cout<<"    Enter Email : ";
    getline(cin,email);
    cout<<endl;
    cout<<"    Enter Job Title : ";
    getline(cin,jobtitle);
    cout<<endl;
    dep->getinfo();
}
void employee::displaydetails()
{
    cout<<"ID : "<<employee_id<<endl
        <<"Name : "<<name<<endl
        <<"Phone : "<<phone<<endl
        <<"Email : "<<email<<endl
        <<"Job Title : "<<jobtitle<<endl<<endl;
    dep->print();
}
void employee::setid(int x)
{
    employee_id=x;
}
int employee::getid()
{
    return employee_id;
}
string employee::getname()
{
    return name;
}
string employee::getjobtitle()
{
    return jobtitle;
}
string employee::getdep()
{
    return dep->getdepartment();
}
employee::~employee()
{

}
