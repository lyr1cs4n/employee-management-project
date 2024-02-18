#include "healthbenefit.h"

healthbenefit::healthbenefit()
{
    //ctor
}

healthbenefit::~healthbenefit()
{
    //dtor
}
double healthbenefit::calcbenefit()
{
    return 0.2 * amount;
}
void healthbenefit::getinfo(string x)
{
    benefit::getinfo(x);
    cout<<endl;
    cout<<"    Enter Coverage : ";
    cin.ignore();
    getline(cin,coverage);
    cout<<endl;
    cout<<"    Enter Health Benefit Info :";
    getline(cin,info);
}
string healthbenefit::getdetails()
{
    return "Heath Benefit Info : " + info + " Coverage : " + coverage + " Benefit Amount : " + to_string(calcbenefit());
}
void healthbenefit::displaybenefit()
{
    benefit::displaybenefit();
    cout<<getdetails();
    cout<<endl;
}
