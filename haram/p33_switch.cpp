#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Recharge Menu =====" << endl;
    cout << "1. Jazz" << endl;
    cout << "2. Zong" << endl;
    cout << "3. Ufone" << endl;
    cout << "4. Telenor" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Jazz Recharge Selected";
            break;
        case 2:
            cout << "Zong Recharge Selected";
            break;
        case 3:
            cout << "Ufone Recharge Selected";
            break;
        case 4:
            cout << "Telenor Recharge Selected";
            break;
        default:
            cout << "Invalid Choice";
    }

    return 0;
}