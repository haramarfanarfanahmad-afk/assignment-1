#include <iostream>
using namespace std;

int main()
{
    int balance = 10000;
    int amount;

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;

    if(amount <= balance)
    {
        cout << "Transaction Allowed";
    }

    return 0;
}