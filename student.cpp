#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
      string name;
      int rollno;
      float marks;

    public:
      void inputDetails(){
        cout<<"Enter Student Name:";
        getline(cin>>ws,name);
        cout<<"Enter Roll Number:";
        cin>>rollno;
        cout<<"Enter Marks:";
        cin>>marks;
      }  

    void displayDetails()const{
        cout<<"\n---Student Details---\n";
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no. :"<<rollno<<endl;
        cout<<"Marks :"<<marks<<endl;
    }  
};

int main(){
    Student s,s1,s2;
    s.inputDetails();
    s.rollno=100;
    s.displayDetails();
    return 0;
}