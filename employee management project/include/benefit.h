#ifndef BENEFIT_H
#define BENEFIT_H

#include <bits/stdc++.h>
using namespace std;
class benefit
{
protected:
    string plantype;
    double amount;
public:
    benefit();
    virtual double calcbenefit()=0;
    virtual void displaybenefit();
    virtual void getinfo(string);
    string getplantype();
    virtual ~benefit();

};

#endif // BENEFIT_H
