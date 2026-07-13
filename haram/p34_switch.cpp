#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Restaurant Menu =====" << endl;
    cout << "1. Burger" << endl;
    cout << "2. Pizza" << endl;
    cout << "3. Biryani" << endl;
    cout << "4. Fries" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Burger Ordered";
            break;
        case 2:
            cout << "Pizza Ordered";
            break;
        case 3:
            cout << "Biryani Ordered";
            break;
        case 4:
            cout << "Fries Ordered";
            break;
        default:
            cout << "Invalid Choice";
    }

    return 0;
}