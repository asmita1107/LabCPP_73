#include<iostream>
using namespace std;

int main()
{
    float radius,area,circumference;

    cout<<"Enter radius:";
    cin>>radius;

    area=3.14*radius*radius;
    circumference=2*3.14*radius;

    cout<<"Area="<<area<<endl;
    cout<<"Circumference="<<circumference<<endl;

    return 0;
}