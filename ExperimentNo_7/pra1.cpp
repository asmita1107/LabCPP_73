#include <iostream>
using namespace std;

class Employee
{
protected:
    int employeeID;
    string employeeName, department;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Employee Name: ";
        cin >> employeeName;
        cout << "Enter Department: ";
        cin >> department;
    }

    void displayEmployee()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Department: " << department << endl;
    }
};

class TeachingStaff : public Employee
{
private:
    string subject, qualification;

public:
    void getTeaching()
    {
        getEmployee();
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void displayTeaching()
    {
        displayEmployee();
        cout << "Subject: " << subject << endl;
        cout << "Qualification: " << qualification << endl;
    }
};

class NonTeachingStaff : public Employee
{
private:
    string designation;
    int workingHours;

public:
    void getNonTeaching()
    {
        getEmployee();
        cout << "Enter Designation: ";
        cin >> designation;
        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeaching()
    {
        displayEmployee();
        cout << "Designation: " << designation << endl;
        cout << "Working Hours: " << workingHours << endl;
    }
};

int main()
{
    TeachingStaff t;
    NonTeachingStaff n;

    cout << "Enter Teaching Staff Details\n";
    t.getTeaching();

    cout << "\nTeaching Staff Details\n";
    t.displayTeaching();

    cout << "\nEnter Non-Teaching Staff Details\n";
    n.getNonTeaching();

    cout << "\nNon-Teaching Staff Details\n";
    n.displayNonTeaching();

    return 0;
}