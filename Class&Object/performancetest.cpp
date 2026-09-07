#include <iostream>
using namespace std;

class Product
{
private:
    int product_id;
    float product_prize;
    int product_quantity;

public:
    Product()
    {
        product_id = 0;
        product_prize = 0;
        product_quantity = 0;
    }

    void getdata();

    void putdata()
    {
        cout << "\n---Product Details---\n" << endl;
        cout << "Product ID: " << product_id << endl;
        cout << "Product Prize: " << product_prize << endl;
        cout << "Product Quantity: " << product_quantity << endl;
    }
};

void Product::getdata()
{
    cout << "Enter Product ID: ";
    cin >> product_id;

    cout << "Enter Product Prize: ";
    cin >> product_prize;

    cout << "Enter Product Quantity: ";
    cin >> product_quantity;
}

int main()
{
    Product p1;
    Product p2;
    Product p3;
    Product p4;

    p1.getdata();
    p1.putdata();

    p2.getdata();
    p2.putdata();

    p3.getdata();
    p3.putdata();

    p4.getdata();
    p4.putdata();

    return 0;
}