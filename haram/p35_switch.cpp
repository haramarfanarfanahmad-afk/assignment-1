#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Electricity Bill Menu =====" << endl;
    cout << "1. View Bill" << endl;
    cout << "2. Pay Bill" << endl;
    cout << "3. Bill History" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Bill Displayed";
            break;
        case 2:
            cout << "Bill Payment Selected";
            break;
        case 3:
            cout << "Bill History Displayed";
            break;
        case 4:
            cout << "Thank You!";
            break;
        default:
            cout << "Invalid Choice";
    }

    return 0;
}