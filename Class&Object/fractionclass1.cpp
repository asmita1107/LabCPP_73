#include <iostream>
using namespace std;

class Fraction {
private:
 int numerator, denominator;

public:
 Fraction(int n = 0, int d = 1) : numerator(n), denominator(d) {}

 Fraction add(Fraction f1,Fraction f2) {
  Fraction f3;
  f3.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
  f3.denominator = f1.denominator * f2.denominator;

  return f3;
}

 Fraction subtract(Fraction f1,Fraction f2) {
  Fraction f3;
  f3.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
  f3.denominator = f1.denominator * f2.denominator;

  return f3;
}

 void display() const {
  cout << numerator << "/" << denominator << endl;
}
};

int main() {
 Fraction f1(3, 4);
 Fraction f2(1, 2);

 Fraction sum = f1.add(f1,f2);
 Fraction diff = f1.subtract(f1,f2);

 cout << "First Fraction: ";
 f1.display();

 cout << "Second Fraction: ";
 f2.display();

 cout << "Addition: ";
 sum.display();

 cout << "Subtraction: ";
 diff.display();

 return 0;
}