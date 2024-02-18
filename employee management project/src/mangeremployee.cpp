#include "mangeremployee.h"

mangeremployee::mangeremployee()
{
    bonus = 0;
    salary = 0;
}
mangeremployee::mangeremployee(double x,double y):salariedemployee(y)
{
    bonus = x;
    salary = y;
}
void mangeremployee::addbonus(double x)
{
    bonus+=x;
}
double mangeremployee::getsalary()
{
    return salary+bonus;
}
double mangeremployee::calcpay()
{
    return getsalary();
}
void mangeremployee::displaydetails()
{
    salariedemployee::displaydetails();
    cout<<"Bonus : "<<bonus;
    cout<<endl<<endl;
}
void mangeremployee::getinfo()
{
    salariedemployee::getinfo();
    cout<<"    Enter Bonus : ";
    cin>>bonus;
    cout<<endl;
}
mangeremployee::~mangeremployee()
{
    //dtor
}
