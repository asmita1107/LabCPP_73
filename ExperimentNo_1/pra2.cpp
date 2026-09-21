#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 5)
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    switch (choice)
    {
        case 1:
            cout << "Result = " << a + b;
            break;

        case 2:
            cout << "Result = " << a - b;
            break;

        case 3:
            cout << "Result = " << a * b;
            break;

        case 4:
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero is not possible";
            break;

        case 5:
            cout << "Result = " << (int)a % (int)b;
            break;

        case 6:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}