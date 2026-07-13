#include <iostream>
using namespace std;

int main()
{
    int balance;

    cout << "Enter Account Balance: ";
    cin >> balance;

    if(balance >= 100000)
        cout << "Premium Account";
    else if(balance >= 50000)
        cout << "Gold Account";
    else if(balance >= 10000)
        cout << "Standard Account";
    else
        cout << "Basic Account";

    return 0;
}