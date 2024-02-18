#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H
#include "benefit.h"
#include <bits/stdc++.h>
using namespace std;
class healthbenefit:public benefit
{
private:
    string info;
    string coverage;
public:
    healthbenefit();
    double calcbenefit();
    void getinfo(string x);
    string getdetails();
    void displaybenefit();
    virtual ~healthbenefit();
};

#endif // HEALTHBENEFIT_H
