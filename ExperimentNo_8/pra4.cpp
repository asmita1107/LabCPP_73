#include <iostream>
using namespace std;

class Complex{
public:
 int real,img;

 Complex(int r,int i){
   real=r;
   img=i;
}

 Complex operator-(){
   return Complex(-real,-img);
}
};

int main(){
 Complex c1(4,5);
 Complex c2=-c1;

 cout<<c2.real<<" + "<<c2.img<<"i";

return 0;
}