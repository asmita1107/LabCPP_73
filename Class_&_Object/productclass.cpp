#include<iostream>
using namespace std;

class Product
{
    private:
     string product_name;
     int product_id;
     int quantity;
     float price;
     float total_bill;

    public:
     void getdata()
    {
        cout<<"Enter Product Name:";
        cin>>product_name;

        cout<<"Enter Product ID:";
        cin>>product_id;

        cout<<"Enter Qauntity:";
        cin>>quantity;

        cout<<"Enter Price:";
        cin>>price;
    }  

    void calculateBill()
    {
        total_bill=quantity*price;
    }

    void putdata()
    {
        cout<<"\nProduct Details\n";
        cout<<"Product Name:"<<product_name<<endl;
        cout<<"Product ID:"<<product_id<<endl;
        cout<<"Quantity:"<<quantity<<endl;
        cout<<"Price:"<<price<<endl;
        cout<<"Total Bill:"<<total_bill<<endl;
    }
};

int main()
{
    Product p;

    p.getdata();
    p.calculateBill();
    p.putdata();

    return 0;
}