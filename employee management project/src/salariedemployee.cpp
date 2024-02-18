#include "salariedemployee.h"

salariedemployee::salariedemployee()
{
    salary = 0;
}
salariedemployee::salariedemployee(double x)
{
    salary=x;
}
salariedemployee::~salariedemployee()
{
    //dtor
}
double salariedemployee::getsalary()
{
    return salary;
}
void salariedemployee::displaydetails()
{
    employee::displaydetails();
    cout<<"Salary : "<<salary;
    cout<<endl<<endl;
}
double salariedemployee::calcpay()
{
    return getsalary();
}
void salariedemployee::getinfo()
{
    employee::getinfo();
    cout<<"    Enter Salary : ";
    cin>>salary;
    cout<<endl;
}
