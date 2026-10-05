#include <iostream>
using namespace std;

class Complex{
public:
 int real,img;

 Complex(){real=0; img=0;}
 Complex(int r,int i){real=r; img=i;}

 Complex operator+(Complex&c2){
   Complex c3;
   c3.real=real+c2.real;
   c3.img=img+c2.img;
   return c3;
    }
};

int main(){
 Complex c1(4,5),c2(3,2),c3;
 c3=c1+c2;

 cout<<"Result: "<<c3.real<<" + "<<c3.img<<"i";

 if(c3.real==7 && c3.img==7)
      cout<<"\nIdentical";
 else
      cout<<"\nNot Identical";

 return 0;
}