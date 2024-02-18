#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <conio.h>
#include <iomanip>
#include <iostream>
#include "hrsystem.h"
#include <windows.h>
using namespace std;

void clear()
{
    cout << endl;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    cout << "saving";
    for (int i = 2; i > 0; i--)
    {
        cout << ".";
        sleep(1);
    }
    system("CLS");
}

void check()
{

    int ch;
    cout << endl;
    cout << endl;
    cout << "\033[33mPress Esc to return back to the main screen. \033[0m";
    do
    {
        ch = getch();
        if (ch == 27)
        {
            system("CLS");
            sleep(1);
        }
    }
    while (ch != 27);
}

void Header(string x)
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << setw(50) << setfill('*') << "" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    cout << setw(32) << setfill(' ') << x << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << setw(50) << setfill('*') << "" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
}
void StartScreen()
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "*****************************************************" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "*                                                   *" << endl;
    cout << "*";
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    cout << "            Employee Management Project            ";
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "*" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << "*                                                   *" << endl;
    cout << "*****************************************************" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "\033[33m| 1 |\033[0m"
         << " Add new Employee" << endl;
    cout << "\033[33m| 2 |\033[0m"
         << " Edit Employee" << endl;
    cout << "\033[33m| 3 |\033[0m"
         << " Edit Employee's Benefit"<< endl;
    cout << "\033[33m| 4 |\033[0m"
         << " Delete Employee" << endl;
    cout << "\033[33m| 5 |\033[0m"
         << " Calculate Salary" << endl;
    cout << "\033[33m| 6 |\033[0m"
         << " Information Reports" << endl;
    cout << "\033[33m| 7 |\033[0m"
         << " Search for Employee" << endl;
    cout << "\033[33m| 8 |\033[0m"
         << " Show All Department Employee" << endl;
    cout << "\033[33m| 0 |\033[0m"
         << " Exit program" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    cout << "==========================================" << endl;
    cout << "Type your option : ";
}
bool is_integer(string x)
{
    bool ischar = false;
    for (int i = 0; i < x.length(); i++)
    {
        if (!isdigit(x[i]))
        {
            ischar = true;
            break;
        }
    }
    if (ischar)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{

    hrsystem emp(100);
    int d;
    string x;
    while (true)
    {
        StartScreen();
        cin >> x;
        do
        {
            cout << "\n\n\n";
            if((x=="0"||x=="1"||x=="2"||x=="3"||x=="4"||x=="5"||x=="6"||x=="7"||x=="8")&&is_integer(x))
            {
                break;
            }
            else
            {
                cout << "[*] "
                     << "\033[33mWrong input, Try again. \033[0m\n"<<endl;
                cout <<"\033[33m    Enter a valid input: \033[0m";
                cin>>x;
            }
        }
        while (true);
        d=stoi(x);
        if (d == 0)
        {
            cout << "\033[33mThanks for using my project :) \033[0m" << endl;
            break;
        }

        if (d == 1)
        {

            system("CLS");
            Header("EMPLOYEE ASSIGNMENT");
            cout << "[*] "
                 << "\033[33mHow Many Employees (\033[0m"<<"0 - "<<100<<"\033[33m) : \033[0m";
            int counter;
            cin>>counter;
            int sum=counter;
            cout<<endl;
            int n;
            do
            {
                n++;
                cout<<endl;
                emp.addemp();
                clear();
                Header("EMPLOYEE ASSIGNMENT");
                cout<<" ("<<n+1<<"/"<<sum<<")"<<endl<<endl;
                counter--;
            }
            while(counter!=0);
            system("CLS");
        }

        if (d == 2)
        {
            system("CLS");
            Header("EDIT EMPLOYEE");
            emp.editemp();
            sleep(2);
            system("CLS");
        }
        if (d == 3)
        {
            system("CLS");
            Header("EDIT EMPLOYEE BENEFIT");
            emp.editempben();
            sleep(2);
            system("CLS");
        }
        if (d == 4)
        {
            system("CLS");
            Header("DELETE CONTACT");
            emp.delemp();
            sleep(2);
            system("CLS");
        }

        if (d == 5)
        {
            system("CLS");
            Header("TOTAL SALARY");
            emp.calctotalpay();
            check();
        }

        if (d == 6)
        {
            system("CLS");
            Header("EMPLOYEE LIST");
            emp.showallemp();
            check();
        }

        if (d == 7)
        {
            int key;
            system("CLS");
            Header("SEARCH OPTIONS");
            cout << "\033[33m| 1 |\033[0m"
                 << " Employee ID" << endl;
            cout << "\033[33m| 2 |\033[0m"
                 << " Employee Name" << endl;
            cout << "\033[33m| 3 |\033[0m"
                 << " Employee Job Title" << endl;
            cout << "\033[33m| 4 |\033[0m"
                 << " Employee Benefit" << endl;
            cout << "\033[33m| 5 |\033[0m"
                 << " Employee Department" << endl<< endl;
            cout << "[*] "
                 << "\033[33mChoose The Method You Want To Search With: \033[0m";
            cin >> key;
            cout << "\n\n";

            if (key == 1)
            {
                cout << "[*] "
                     << "\033[33mEnter Employee ID: \033[0m";
                string data;
                cin.ignore();
                getline(cin, data);
                system("CLS");
                Header("SEARCHED RESULTS");
                emp.searchemp(data,key);
                check();
            }

            if (key == 2)
            {
                cout << "[*] "
                     << "\033[33mEnter Employee Name: \033[0m";
                string data;
                cin.ignore();
                getline(cin, data);
                system("CLS");
                Header("SEARCHED RESULTS");
                emp.searchemp(data,key);
                check();
            }

            if (key == 3)
            {
                cout << "[*] "
                     << "\033[33mEnter Employee Job Title: \033[0m";
                string data;
                cin.ignore();
                getline(cin, data);
                system("CLS");
                Header("SEARCHED RESULTS");
                emp.searchemp(data,key);
                check();
            }
            if (key == 4)
            {
                cout << "[*] "
                     << "\033[33mEnter Employee Benefit: \033[0m";
                string data;
                cin.ignore();
                getline(cin, data);
                system("CLS");
                Header("SEARCHED RESULTS");
                emp.searchemp(data,key);
                check();
            }
            if (key == 5)
            {
                cout << "[*] "
                     << "\033[33mEnter Employee Department: \033[0m";
                string data;
                cin.ignore();
                getline(cin, data);
                system("CLS");
                Header("SEARCHED RESULTS");
                emp.searchemp(data,key);
                check();
            }

        }

        if (d == 8)
        {
            system("CLS");
            Header("DEPARTMENT EMPLOYEE LIST");
            emp.showalldepemp();
            check();
        }



    }
    return 0;
}
