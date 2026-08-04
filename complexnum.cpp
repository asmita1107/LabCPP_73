#include<iostream>
using namespace std;

class Complex{
    private:
      int real,imag;

    public:
     Complex(int r=0,int i=0):real(r),image(i){}

     Complex add(const Complex &c){
        return Complex(real+c.real,imag+c.imag);
     }

     Complex subtract(const Complex &c){
        return Complex(real-c.real,imag-c.imag);
     }
     void display()const{
        cout<<real<<"+i"<<imag<<endl;
     }
}