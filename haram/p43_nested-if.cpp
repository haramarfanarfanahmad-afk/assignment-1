#include <iostream>
using namespace std;

int main()
{
    int sim, amount;

    cout << "SIM Registered? (1=Yes, 0=No): ";
    cin >> sim;

    if(sim == 1)
    {
        cout << "Enter Recharge Amount: ";
        cin >> amount;

        if(amount >= 100)
        {
            cout << "Recharge Successful.";
        }
        else
        {
            cout << "Minimum Recharge is Rs.100.";
        }
    }
    else
    {
        cout << "SIM Not Registered.";
    }

    return 0;
}