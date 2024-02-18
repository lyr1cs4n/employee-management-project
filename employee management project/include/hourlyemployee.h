#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "employee.h"

class hourlyemployee: public employee
{
private:
    double hrsworked;
    double rate;
public:
    hourlyemployee();
    hourlyemployee(double,double);
    void addhours(double);
    double getsalary();
    double calcpay();
    void displaydetails();
    void getinfo();
};

#endif // HOURLYEMPLOYEE_H
