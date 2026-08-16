#include<iostream>
using namespace std;

class Employee
{
   private: 
    int employee_id;
    float basic_salary;
    string designation;
    string branch;
    float gross_salary;

   public:
    void getdata()
    {
        cout<<"Enter Employee ID:";
        cin>>employee_id;

        cout<<"Enter Basic Salary:";
        cin>>basic_salary;

        cout<<"Enter Designation:";
        cin>>designation;

        cout<<"Enter Branch:";
        cin>>branch;
    }

    void calculateSalary()
    {
        gross_salary=basic_salary+(0.20*basic_salary)+(0.10*basic_salary);
    }

    void putdata()
    {
        cout<<"\nEmployee Details\n";
        cout<<"Employee ID:"<<employee_id<<endl;
        cout<<"Basic Salary:"<<basic_salary<<endl;
        cout<<"Designation:"<<designation<<endl;
        cout<<"Branch:"<<branch<<endl;
        cout<<"Gross Salary:"<<gross_salary<<endl;
    }
};

int main()
{
    Employee e;
    e.getdata();
    e.calculateSalary();
    e.putdata();

    return 0;
}