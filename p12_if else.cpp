#include <iostream>
using namespace std;

int main()
{
    int balance = 10000, amount;

    cout << "Enter Withdrawal Amount: ";
    cin >> amount;

    if(amount <= balance)
    {
        cout << "Transaction Successful";
    }
    else
    {
        cout << "Insufficient Balance";
    }

    return 0;
}