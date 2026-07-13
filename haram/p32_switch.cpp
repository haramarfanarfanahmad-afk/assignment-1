#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== ATM Menu =====" << endl;
    cout << "1. Balance Inquiry" << endl;
    cout << "2. Cash Withdrawal" << endl;
    cout << "3. Cash Deposit" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Balance Displayed";
            break;
        case 2:
            cout << "Withdrawal Selected";
            break;
        case 3:
            cout << "Deposit Selected";
            break;
        case 4:
            cout << "Thank You!";
            break;
        default:
            cout << "Invalid Choice";
    }

    return 0;
}