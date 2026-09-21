#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    
    void getStudent()
    {
        cout << "Enter student name: ";
        cin >> name;
    }
};

class Marks
{
public:
    int marks;
    
    void getMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
};

class Result
{
public:
    void display(Student s, Marks m)
    {
        cout << "\n--- Student Result ---" << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << m.marks << endl;
        
        if (m.marks >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main()
{
    Student s;
    Marks m;
    Result r;

    s.getStudent();
    m.getMarks();
    r.display(s, m);

    return 0;
}