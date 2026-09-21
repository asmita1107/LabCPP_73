#include<iostream>
using namespace std;

class Employee
{
    int employeeID;
    string employeeName;
    float basicSalary,HRA,DA;

  public:
    Employee(int id,string name,float basic,float hra,float da)
    {
        employeeID = id;
        employeeName = name;
        basicSalary = basic;
        HRA = hra;
        DA = da;
    }
      
    float grossSalary()
    {
        return basicSalary + HRA + DA;
    }

    void display()
    {
        cout<<"\n--- Employee Details---"<<endl;
        cout<<"Employee ID :"<<employeeID<<endl;
        cout<<"Basic Salary :"<<basicSalary<<endl;
        cout<<"HRA :"<<HRA<<endl;
        cout<<"DA :"<<DA<<endl;
        cout<<"Gross Salary :"<<grossSalary()<<endl;
    }

    ~Employee()
    {
        cout<<"\nEmployee object is destroyed"<<endl;
    }

};

int main()
{
    Employee e1(101,"Asmita",30000,50000,30000);

    e1.display();
    return 0;
}