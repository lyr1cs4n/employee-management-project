#include "commissionEmployee.h"

commissionEmployee::commissionEmployee()
{
    target = 0;
    rate = 0;
}
commissionEmployee::commissionEmployee(double x,double y)
{
    target = x;
    rate  = y;
}
double commissionEmployee::getsalary()
{
    return rate * target;
}
void commissionEmployee::displaydetails()
{
    employee::displaydetails();
    cout<<"Target : "<<target<<endl
        <<"Rate : "<<rate;
    cout<<endl;
    cout<<endl;
}
double commissionEmployee::calcpay()
{
    return getsalary();
}
void commissionEmployee::getinfo()
{
    employee::getinfo();
    cout<<"    Enter Target : ";
    cin>>target;
    cout<<endl;
    cout<<"    Enter Rate : ";
    cin>>rate;
    cout<<endl;
}
commissionEmployee::~commissionEmployee()
{

}
