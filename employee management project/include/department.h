#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <bits/stdc++.h>
using namespace std;

class department
{
private:
    int dep_id;
    string departname;

public:
    department();
    department(int,string);
    void getinfo();
    void print();
    string getdepartment();
};

#endif // DEPARTMENT_H
