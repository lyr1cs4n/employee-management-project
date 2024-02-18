#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
#include "benefit.h"
#include <bits/stdc++.h>
using namespace std;
class dentalbenefit:public benefit
{
public:
    string info;
    dentalbenefit();
    double calcbenefit();
    void getinfo(string x);
    string getdetails();
    void displaybenefit();
    virtual ~dentalbenefit();
};

#endif // DENTALBENEFIT_H
