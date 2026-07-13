#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Online Shopping Menu =====" << endl;
    cout << "1. View Products" << endl;
    cout << "2. Add to Cart" << endl;
    cout << "3. Checkout" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Displaying Products";
            break;

        case 2:
            cout << "Product Added to Cart";
            break;

        case 3:
            cout << "Order Placed Successfully";
            break;

        case 4:
            cout << "Thank You for Shopping!";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}