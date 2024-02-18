#include "dentalbenefit.h"

dentalbenefit::dentalbenefit()
{
    //ctor
}

dentalbenefit::~dentalbenefit()
{
    //dtor
}
double dentalbenefit::calcbenefit()
{
    return 0.1*amount;
}
void dentalbenefit::getinfo(string x)
{
    benefit::getinfo(x);
    cout<<endl;
    cout<<"    Enter Dental Benefit Info : ";
    cin.ignore();
    getline(cin,info);
}
string dentalbenefit::getdetails()
{
    return "Dental Benefit Info : " + info + " Benefit Amount : " + to_string(calcbenefit());
}
void dentalbenefit::displaybenefit()
{
    benefit::displaybenefit();
    cout<<getdetails();
    cout<<endl;
}
