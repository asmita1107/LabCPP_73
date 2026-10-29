#include <iostream>
using namespace std;

class InvalidMarksException {};

int main()
{
  int marks;
  cout << "Enter marks: ";
  cin >> marks;

  try
  {
     if (marks < 0 || marks > 100)
         throw InvalidMarksException();

     cout << "Valid marks";
  }
  catch (InvalidMarksException e)
  {
     cout << "Invalid marks";
  }

  return 0;
}