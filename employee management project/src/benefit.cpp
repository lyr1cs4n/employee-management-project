#include "benefit.h"

benefit::benefit()
{
    //ctor
}
void benefit::getinfo(string x)
{
    plantype = x;
    cout<<endl;
    cout<<"    Enter Amount : ";
    cin>>amount;
}
string benefit::getplantype()
{
    return plantype;
}

void benefit::displaybenefit()
{
    cout<<"Plan Type : "<<plantype<<endl
        <<"Amount : "<<amount<<endl;
}
benefit::~benefit()
{
    //dtor
}
