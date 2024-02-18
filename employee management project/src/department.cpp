#include "department.h"
department::department()
{

}
department::department(int x, string y)
{
    dep_id=x;
    departname=y;
}
void department::getinfo()
{
    cout<<"    Enter Department ID : ";
    cin>>dep_id;
    cout<<endl;
    cout<<"    Enter Department Name : ";
    cin.ignore();
    getline(cin,departname);
    cout<<endl;
}
void department::print()
{
    cout<<"Department ID : "<<dep_id<<endl
        <<"Department Name : "<<departname<<endl<<endl;
}
string department::getdepartment()
{
    return departname;
}
