#ifndef HRSYSTEM_H
#define HRSYSTEM_H
#include "employee.h"
#include "salariedemployee.h"
#include "commissionEmployee.h"
#include "hourlyemployee.h"
#include "mangeremployee.h"
#include "benefit.h"
#include "healthbenefit.h"
#include "dentalbenefit.h"
class hrsystem
{
private:
    employee **emplist;
    benefit **empbenlist;
    int emp_size;
    int emp_count;
public:
    hrsystem();
    hrsystem(int);
    void addemp();
    void editemp();
    void editempben();
    void delemp();
    void searchemp(string,int);
    void benefitchker(int x);
    void showalldepemp();
    void showallemp();
    void calctotalpay();
    virtual ~hrsystem();
};

#endif // HRSYSTEM_H
