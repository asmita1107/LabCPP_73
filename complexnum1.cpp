#include<iostream>
using namespace std;

class Complex{
    private:
      int real,imag;

    public:
     Complex(int r=0,int i=0):real(r),imag(i){}

     Complex add(Complex c1,Complex c2){
        Complex c3;
        c3.real=c1.real+c2.real;
        c3.imag=c1.imag+c2.imag;
        return c3;
     }

     Complex subtract(const Complex &c){
        return Complex(real-c.real,imag-c.imag);
     }
     void display()const{
        cout<<real<<"+i"<<imag<<endl;
     }
};

int main()
{
   Complex c1(4,5),c2(8,9);
   Complex sum=c1.add(c1,c2);
   Complex diff=c1.subtract(c2);

   cout<<"First Complex Number:";c1.display();
   cout<<"Second Complex Number:";c2.display();
   cout<<"Addition:";sum.display();
   cout<<"Subtraction:";diff.display();

   return 0;
}