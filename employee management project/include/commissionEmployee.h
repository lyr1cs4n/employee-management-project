#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "employee.h"

class commissionEmployee : public employee
{
public:
    double target;
    double rate;
    commissionEmployee();
    commissionEmployee(double,double);
    double getsalary();
    void displaydetails();
    double calcpay();
    void getinfo();
    virtual ~commissionEmployee();


};

#endif // COMMISSIONEMPLOYEE_H
