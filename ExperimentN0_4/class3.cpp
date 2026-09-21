#include<iostream>
using namespace std;

// Practice Assignment 1
class LibraryBook {
private:
 string bookName;
 string authorName;
 bool issued;

public:
 LibraryBook(string name, string author) {
 bookName = name;
 authorName = author;
 issued = false;
}

 void issueBook() {
 if (!issued) {
   issued = true;
   cout << "Book issued successfully!" << endl;
}
else {
   cout << "Book is already issued!" << endl;
}
}

 void returnBook() {
  if (issued) {
   issued = false;
   cout << "Book returned successfully!" << endl;
} 
else {
  cout << "Book is not issued!" << endl;
}
}

 void display() {
  cout << "\n[Library Book]" << endl;
  cout << "Book Name: " << bookName << endl;
  cout << "Author Name: " << authorName << endl;
  cout << "Status: " << (issued ? "Issued" : "Available") << endl;
}
};

// Practice Assignment 2
class Patient {
private:
 string patientName;
 int age;
 string disease;
 double consultationCharge;

public:
 Patient(string name, int patientAge, string patientDisease, double charge) {
   patientName = name;
   age = patientAge;
   disease = patientDisease;
   consultationCharge = charge;
}

 double calculateCharges() {
   return consultationCharge;
}

 void display() {
   cout << "\n[Patient Details]" << endl;
   cout << "Patient Name: " << patientName << endl;
   cout << "Age: " << age << endl;
   cout << "Disease: " << disease << endl;
   cout << "Consultation Charges: Rs"<< calculateCharges() << endl;
}
};

// Practice Assignment 3
class MobileRecharge {
private:
  string mobileNumber;
  double balance;

public:
  MobileRecharge(string number, double initialBalance) {
  mobileNumber = number;
  balance = initialBalance;
}

  void recharge(double amount) {
    if (amount > 0) {
      balance += amount;
      cout << "Recharge Successful: RS" << amount << endl;
}
}

  void deductBalance(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      cout << "Balance Deducted: RS" << amount << endl;
} 
   else {
      cout << "Insufficient balance!" << endl;
}
}

  void display() {
    cout << "\n[Mobile Account]" << endl;
    cout << "Mobile Number: " << mobileNumber << endl;
    cout << "Balance: Rs" << balance << endl;
    }
};

int main() {

  LibraryBook book("C++ Programming", "Bjarne Stroustrup");

    book.display();
    book.issueBook();
    book.display();
    book.returnBook();
    book.display();

  Patient patient("Alice", 25, "Fever", 500.0);
    patient.display();

  MobileRecharge mobile("8767064830", 100.0);

    mobile.display();
    mobile.recharge(200.0);
    mobile.deductBalance(150.0);
    mobile.display();

    return 0;
}