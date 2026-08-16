#include<iostream>
using namespace std;
class item 
{
    int id;
    float cost;
    public:
    int getdata(int a,float b);
    int putdata()
    {
        cout<<"Id of item is "<<id<<"\n";
        cout<<"Cost of item is "<<cost<<"\n";
        return 0;
    }
};
int item::getdata(int a,float b)
{
    id=a;
    cost=b;
    return 0;
}
int main()
{
    item x;
    cout<<"object x"<<"\n";
    x.getdata(10,35.5);
    x.putdata();

    item y;
    cout<<"object y"<<"\n";
    y.getdata(25,66.6);
    y.putdata();
    return 0;

}


