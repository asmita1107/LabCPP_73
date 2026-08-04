#include<iostream>
using namespace std;

namespace Asmita
{
    int add(int,int);
    int sub(int,int);
    int mul(int,int);
    float div(int,int);
}
int main()
{
    int a,b;

    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Addition="<<Asmita::add(a,b)<<endl;
    cout<<"Subtraction="<<Asmita::sub(a,b)<<endl;
    cout<<"Product="<<Asmita::mul(a,b)<<endl;
    cout<<"Division="<<Asmita::div(a,b)<<endl;
    
    return 0;
}