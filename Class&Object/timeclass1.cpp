#include <iostream>
using namespace std;

class Time {
private:
 int hour, minute;

public:
 Time(int h=0, int m=0) : hour(h), minute(m) {}

 Time add(Time t1, Time t2) {
  Time t3;
  t3.hour = t1.hour + t2.hour;
  t3.minute = t1.minute + t2.minute;

  if(t3.minute >= 60) {
    t3.hour++;
    t3.minute -= 60;
}
    return t3;
}

 Time subtract(const Time &t) {
  return Time(hour-t.hour, minute-t.minute);
}

 void display() const {
  cout << hour << " hours " << minute << " minutes" << endl;
}
};

int main() {
 Time t1(5,40), t2(2,30);

 Time sum = t1.add(t1,t2);
 Time diff = t1.subtract(t2);

 cout << "First Time: "; t1.display();
 cout << "Second Time: "; t2.display();
 cout << "Addition: "; sum.display();
 cout << "Subtraction: "; diff.display();

 return 0;
}