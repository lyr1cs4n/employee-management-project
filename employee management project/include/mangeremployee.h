#ifndef MANGEREMPLOYEE_H
#define MANGEREMPLOYEE_H
#include "salariedemployee.h"

class mangeremployee: public salariedemployee
{
private:
    double bonus;
public:
    mangeremployee();
    mangeremployee(double,double);
    void addbonus(double);
    double getsalary();
    void getinfo ();
    void displaydetails();
    double calcpay();
    virtual ~mangeremployee();

};

#endif // MANGEREMPLOYEE_H
