#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "department.h"

class employee
{
protected:
    int employee_id;
    string name;
    string phone;
    string email;
    string jobtitle;
    department *dep;
    int empl_count;

public:
    employee();
    virtual void getinfo();
    virtual double getsalary()=0;
    virtual double calcpay ()=0;
    virtual void displaydetails();
    string getdep();
    void setid(int);
    int getid ();
    string getname();
    string getjobtitle();
    virtual ~employee();


};

#endif // EMPLOYEE_H
