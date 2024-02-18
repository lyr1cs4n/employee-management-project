#include "hourlyemployee.h"

hourlyemployee::hourlyemployee()
{
    hrsworked=0;
    rate=0;
}
hourlyemployee::hourlyemployee(double x,double y)
{
    hrsworked=x;
    rate=y;
}
void hourlyemployee::addhours(double x)
{
    hrsworked+=x;
}
double hourlyemployee::getsalary()
{
    return rate*hrsworked;
}
double hourlyemployee::calcpay()
{
    return getsalary();
}
void hourlyemployee::displaydetails()
{
    employee::displaydetails();
    cout<<"Rate : "<<rate<<endl
        <<"Hours Worked : "<<hrsworked;
    cout<<endl<<endl;
}
void hourlyemployee::getinfo()
{
    employee::getinfo();
    cout<<"    Enter Rate : ";
    cin>>rate;
    cout<<endl;
    cout<<"    Enter hours worked : ";
    cin>>hrsworked;
    cout<<endl;

}
