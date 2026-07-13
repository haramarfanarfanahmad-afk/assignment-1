#include <iostream>
using namespace std;

int main()
{
    int amount;

    cout << "Enter Recharge Amount: ";
    cin >> amount;

    if(amount >= 100)
    {
        cout << "Recharge Successful";
    }
    else
    {
        cout << "Minimum Recharge is Rs.100";
    }

    return 0;
}