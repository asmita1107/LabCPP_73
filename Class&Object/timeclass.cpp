#include <iostream>
using namespace std;

class Time {
private:
  int hour, minute;

public:
 Time(int h = 0, int m = 0) : hour(h), minute(m) {}

 Time add(const Time &t) {
  int totalMinutes = hour * 60 + minute + t.hour * 60 + t.minute;
  
  return Time(totalMinutes / 60, totalMinutes % 60);
}

 Time subtract(const Time &t) {
  int totalMinutes = hour * 60 + minute - (t.hour * 60 + t.minute);

  return Time(totalMinutes / 60, totalMinutes % 60);
}

 void display() const {
  cout << hour << " hours " << minute << " minutes" << endl;
}
};

int main() {
 Time t1(5, 40), t2(2, 30);

 Time sum = t1.add(t2);
 Time diff = t1.subtract(t2);

 cout << "First Time: ";
 t1.display();

 cout << "Second Time: ";
 t2.display();

 cout << "Addition: ";
 sum.display();

 cout << "Subtraction: ";
 diff.display();

 return 0;
}