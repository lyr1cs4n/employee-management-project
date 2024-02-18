#include "hrsystem.h"

hrsystem::hrsystem()
{

}
hrsystem::hrsystem(int size)
{
    emp_size=size;
    emplist = new employee*[emp_size];
    empbenlist=new benefit*[emp_size];
    emp_count=0;
}
hrsystem::~hrsystem()
{

}
void hrsystem::benefitchker(int x)
{
    do
    {
        string k;
        cout << "[*] "
             << "\033[33mChoose Employee's Benefit (\033[0m"<<"Health"<<"\033[33m - \033[0m"<<"Dental"<<"\033[33m) : \033[0m";
        cin>>k;
        if(k=="Health"||k=="health")
        {
            empbenlist[x]=new healthbenefit();
            empbenlist[x]->getinfo(k);
            break;
        }
        else if(k=="Dental"||k=="dental")
        {
            empbenlist[x]=new dentalbenefit();
            empbenlist[x]->getinfo(k);
            break;
        }
        else
        {
            cout<<endl;
            cout<<"    Invalid input\n\n";
        }
    }
    while(true);
}

void hrsystem::addemp()
{
    string s;
    cout << "[*] "
         << "\033[33mChoose Employee Type (\033[0m"<<"Hourly"<<"\033[33m - \033[0m"<<"Salaried"<<"\033[33m - \033[0m"<<"Commission"<<"\033[33m - \033[0m"<<"Manager"<<"\033[33m) : \033[0m";
    cin>>s;
    if(s=="Hourly"||s=="hourly")
    {
        emplist[emp_count] = new hourlyemployee();
        emplist[emp_count]->getinfo();
        benefitchker(emp_count);
        emplist[emp_count]->setid(emp_count+1);
        emp_count++;
    }

    else if(s=="Salaried"||s=="salaried")
    {

        emplist[emp_count] = new salariedemployee();
        emplist[emp_count]->getinfo();
        benefitchker(emp_count);
        emplist[emp_count]->setid(emp_count+1);
        emp_count++;
    }

    else if(s=="Commission"||s=="commission")
    {
        emplist[emp_count] = new commissionEmployee();
        emplist[emp_count]->getinfo();
        benefitchker(emp_count);
        emplist[emp_count]->setid(emp_count+1);
        emp_count++;
    }
    else if(s=="Manager"||s=="manager")
    {
        emplist[emp_count] = new mangeremployee();
        emplist[emp_count]->getinfo();
        benefitchker(emp_count);
        emplist[emp_count]->setid(emp_count+1);
        emp_count++;
    }
    else
    {
        cout<<endl;
        cout<<"    Invalid input\n\n";
    }
}
void hrsystem::editemp()
{
    if (emp_count==0)
    {
        cout<<"\033[33m List Is Empty.\033[0m";
    }
    else
    {
        int id;
        bool check=false;
        cout << "[*] "
             << "\033[33mEnter User's Id That You Want To Edit: \033[0m";
        cin>>id;
            for(int i=0; i<emp_count; i++)
            {
                if(emplist[i]->getid()==id)
                {
                    emplist[i]->displaydetails();
                    cout<<endl;
                    cout << "[*] "
                         << "\033[33mDo you want to Edit this employee (y/n) : \033[0m";
                    string x;
                    cin>>x;
                    cout<<endl;
                    if (x=="y"||x=="Y"||x=="n"||x=="N"){
                    emplist[i]->getinfo();
                    check=true;
                    break;
                }else {
                    break;
                }
                }
            }
            if (check)
            {
                cout << "\033[33m    Edit is completed.\033[0m" << endl;
            }
            else
            {
                cout << "\033[33m    Failed to edit, User not found.\033[0m" << endl;
            }


    }
}
void hrsystem::editempben()
{
    if (emp_count==0)
    {
        cout<<"\033[33m List Is Empty.\033[0m";
    }
    else
    {
        int id;
        bool check=false;
        cout << "[*] "
             << "\033[33mEnter User's Id That You Want To Edit: \033[0m";
        cin>>id;
        cout<<endl;
            for(int i=0; i<emp_count; i++)
            {
                if(emplist[i]->getid()==id)
                {
                    emplist[i]->displaydetails();
                    cout<<endl;
                    cout << "[*] "
                         << "\033[33mDo you want to Edit this employee (y/n) : \033[0m";
                    string x;
                    cin>>x;
                    cout<<endl;
                    if (x=="y"||x=="Y"||x=="n"||x=="N"){
                    benefitchker(i);
                    check=true;
                    break;
                }else {
                    break;
                }
                }
            }
            if (check)
            {
                cout << "\033[33m    Edit is completed.\033[0m" << endl;
            }
            else
            {
                cout << "\033[33m    Failed to edit, User not found.\033[0m" << endl;
            }

    }
}
void hrsystem::delemp()
{
    if (emp_count==0)
    {
        cout<<"\033[33m List Is Empty.\033[0m";
    }
    else
    {
        int id;
        cout << "\033[33mEnter Employee's ID to Delete : \033[0m";
        cin >> id;
        bool deleted = false;
        for (int i = 0; i < emp_count; ++i)
        {
            if (emplist[i]->getid() == id)
            {
                emplist[i]->displaydetails();
                empbenlist[i]->displaybenefit();
                cout<<endl;
                string x;
                cout << "[*] "
                     << "\033[33mAre You Sure You Want TO Delete This Employee (y/n) : \033[0m";
                cin>>x;
                if(x=="y"||x=="Y"||x=="n"||x=="N")
                {
                    if (i == emp_count - 1)
                    {
                        emp_count--;
                    }
                    else
                    {
                        emplist[i] = emplist[emp_count - 1];
                        emp_count--;
                    }
                    deleted = true;
                    break;
                }
            }
        }
        if (deleted)
        {
            cout << "\033[33m    Employee Deleted \033[0m";
        }
        else
        {
            cout << "\033[33m    Employee Is Not Found \033[0m";
        }
    }
}
void hrsystem::searchemp(string data, int key)
{
    bool check = false;
    if (emp_count == 0)
    {
        cout<<"\033[33m List Is Empty.\033[0m";
    }
    else
    {

        for (int i = 0; i < emp_count; i++)
        {
            if (key == 1)
            {
                if (emplist[i]->getid() == stoi(data))
                {
                    cout << "\033[33mUser found\n\n\033[0m";
                    cout << "=====================================" << endl;
                    emplist[i]->displaydetails();
                    empbenlist[i]->displaybenefit();
                    cout << "=====================================" << endl;
                    check = true;
                    break;
                }
            }
            else if (key == 2)
            {
                if (emplist[i]->getname() == data)
                {
                    cout << "\033[33mUser found\n\n\033[0m";
                    cout << "=====================================" << endl;
                    emplist[i]->displaydetails();
                    empbenlist[i]->displaybenefit();
                    cout << "=====================================" << endl;
                    check = true;
                    break;
                }
            }
            else if (key == 3)
            {
                if (emplist[i]->getjobtitle() == data)
                {
                    cout << "\033[33mUser found\n\n\033[0m";
                    cout << "=====================================" << endl;
                    emplist[i]->displaydetails();
                    empbenlist[i]->displaybenefit();
                    cout << "=====================================" << endl;
                    check = true;
                    break;
                }
            }
            else if (key == 4)
            {
                if (empbenlist[i]->getplantype() == data)
                {
                    cout << "\033[33mUser found\n\n\033[0m";
                    cout << "=====================================" << endl;
                    emplist[i]->displaydetails();
                    empbenlist[i]->displaybenefit();
                    cout << "=====================================" << endl;
                    check = true;
                    break;
                }
            }
            else if (key == 5)
            {
                if (emplist[i]->getdep() == data)
                {
                    cout << "\033[33mUser found\n\n\033[0m";
                    cout << "=====================================" << endl;
                    emplist[i]->displaydetails();
                    empbenlist[i]->displaybenefit();
                    cout << "=====================================" << endl;
                    check = true;
                    break;
                }
            }
        }
        if (!check)
        {
            cout << "\033[33mEmployee Is Not Found\033[0m";
        }


    }
}
void hrsystem::showallemp()
{
    if(emp_count==0)
    {
        cout<<"\033[33m List Is Empty.\033[0m";
    }
    for(int i=0; i<emp_count; i++)
    {
        emplist[i]->displaydetails();
        empbenlist[i]->displaybenefit();
        cout<<endl;
        cout<<"====================================="<<endl;
    }
}
void hrsystem::showalldepemp()
{
    if(emp_count==0)
    {
        cout<<"\033[33m List Is Empty.\033[0m";
    }
    else
    {
        cout << "[*] "
             << "\033[33mEnter Department Name : \033[0m";
        string x;
        cin>>x;
        cout<<endl;
        bool check=false;
        for(int i=0; i<emp_count; i++)
        {
            if(emplist[i]->getdep()==x)
            {
                emplist[i]->displaydetails();
                empbenlist[i]->displaybenefit();
                check=true;
                cout<<endl;
                cout<<"====================================="<<endl;
            }
        }
        if (!check)
        {
            cout << "\033[33m    Department Is Not Found\033[0m";
        }
    }
}
void hrsystem::calctotalpay()
{
    double total;
    if (emp_count==0)
    {
        cout<<"\033[33m List Is Empty.\033[0m";
    }
    else
    {
        cout << "Employees Total Payroll :\n";
        for (int i = 0; i < emp_count; i++)
        {
            total +=  emplist[i]->calcpay() +empbenlist[i]->calcbenefit();
        }
        cout << "\nTotal Payroll = " << total;
    }
}
