#include <iostream>
using namespace std;

int main()
{
    int pin, amount, balance = 10000;

    cout << "Enter PIN: ";
    cin >> pin;

    if(pin == 1234)
    {
        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if(amount <= balance)
        {
            cout << "Transaction Successful.";
        }
        else
        {
            cout << "Insufficient Balance.";
        }
    }
    else
    {
        cout << "Invalid PIN.";
    }

    return 0;
}