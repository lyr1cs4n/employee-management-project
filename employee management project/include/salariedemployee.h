#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "employee.h"

class salariedemployee:public employee
{
public:
    double salary;
    salariedemployee();
    salariedemployee(double);
    virtual ~salariedemployee();
    double getsalary();
    virtual void displaydetails();
    double calcpay();
    virtual void getinfo();

};

#endif // SALARIEDEMPLOYEE_H
