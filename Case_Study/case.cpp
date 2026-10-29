#include <iostream>
#include <string>

using namespace std;

class MenuItem {
private:
    string name;
    double price;

public:
    MenuItem() {
        name = "Water";
        price = 0.0;
    }

    MenuItem(string n, double p) {
        name = n;
        price = p;
    }

    string getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }
};

class Order {
private:
    MenuItem item;
    int quantity;

public:
    Order() {
        quantity = 0;
    }

    Order(MenuItem mItem, int qty) {
        item = mItem;
        quantity = qty;
    }

    int getQuantity() const {
        return quantity;
    }

    MenuItem getMenuItem() const {
        return item;
    }

    double calculateSubtotal() const {
        return item.getPrice() * quantity;
    }
};

class Table {
private:
    int tableNumber;
    int capacity;
    string customerName;
    bool isOccupied;
    Order currentOrder;

public:
    Table(int num, int cap) {
        tableNumber = num;
        capacity = cap;
        customerName = "None";
        isOccupied = false;
    }

    void assignGuests(string name, int headcount) {
        if (isOccupied) {
            cout << "[DENIED] Table " << tableNumber
                 << " is currently busy with "
                 << customerName << "'s party." << endl;
        }
        else if (headcount > capacity) {
            cout << "[DENIED] Table " << tableNumber
                 << " only seats " << capacity
                 << ". Cannot fit " << headcount
                 << " guests." << endl;
        }
        else {
            customerName = name;
            isOccupied = true;

            cout << "[SUCCESS] Table " << tableNumber
                 << " assigned to " << customerName
                 << " (" << headcount << " guests)." << endl;
        }
    }

    void placeTableOrder(Order activeOrder) {
        if (!isOccupied) {
            cout << "[ALERT] Cannot take order. Table "
                 << tableNumber
                 << " has no customers!" << endl;
        }
        else {
            currentOrder = activeOrder;

            cout << "[ORDER SUCCESS] Table "
                 << tableNumber
                 << " ordered: "
                 << currentOrder.getQuantity()
                 << "x "
                 << currentOrder.getMenuItem().getName()
                 << endl;
        }
    }

    void checkout() {
        if (!isOccupied) {
            cout << "[ALERT] Table "
                 << tableNumber
                 << " is already empty!" << endl;
            return;
        }

        double foodTotal = currentOrder.calculateSubtotal();
        double tax = foodTotal * 0.05;
        double finalBill = foodTotal + tax;

        cout << "\n=========================================" << endl;
        cout << "             THE GRAND BISTRO            " << endl;
        cout << "=========================================" << endl;

        cout << "Table Number   : " << tableNumber << endl;
        cout << "Customer Name  : " << customerName << endl;
        cout << "-----------------------------------------" << endl;

        if (currentOrder.getQuantity() > 0) {
            cout << currentOrder.getMenuItem().getName()
                 << " (x" << currentOrder.getQuantity()
                 << ") @ Rs. "
                 << currentOrder.getMenuItem().getPrice()
                 << " each" << endl;

            cout << "-----------------------------------------" << endl;
            cout << "Food Subtotal  : Rs. " << foodTotal << endl;
            cout << "Tax (5%)       : Rs. " << tax << endl;
        }
        else {
            cout << "No items were ordered." << endl;
        }

        cout << "-----------------------------------------" << endl;
        cout << "GRAND TOTAL    : Rs. " << finalBill << endl;
        cout << "=========================================" << endl;

        customerName = "None";
        isOccupied = false;
        currentOrder = Order();

        cout << "[CLEARED] Table " << tableNumber
             << " has paid and is now clean.\n" << endl;
    }

    void displayTableLog() const {
        cout << "Table " << tableNumber
             << " [Max Capacity: " << capacity << "] | ";

        if (isOccupied) {
            cout << "Status: OCCUPIED by " << customerName;

            if (currentOrder.getQuantity() > 0) {
                cout << " (Awaiting: "
                     << currentOrder.getMenuItem().getName()
                     << ")";
            }
            else {
                cout << " (Browsing Menu)";
            }
        }
        else {
            cout << "Status: VACANT";
        }

        cout << endl;
    }
};

int main() {

    MenuItem burger("Classic Cheese Burger", 250.00);
    MenuItem pizza("Farmhouse Thin Crust Pizza", 480.00);
    MenuItem shake("Chocolate Fudge Shake", 180.00);

    Table t1(101, 2);
    Table t2(102, 4);
    Table t3(103, 8);

    t1.displayTableLog();
    t2.displayTableLog();
    t3.displayTableLog();

    cout << endl;

    t1.assignGuests("Amit Roy", 2);
    t2.assignGuests("Priya Sen", 4);

    t1.assignGuests("Kapoor Family", 4);

    cout << endl;

    Order orderOne(burger, 2);
    Order orderTwo(pizza, 1);

    t1.placeTableOrder(orderOne);
    t2.placeTableOrder(orderTwo);

    t3.placeTableOrder(Order(shake, 3));

    cout << endl;

    t1.displayTableLog();
    t2.displayTableLog();
    t3.displayTableLog();

    cout << endl;

    t1.checkout();

    cout << "Verification of ongoing tables post-checkout:"
         << endl;

    t2.displayTableLog();

    return 0;
}