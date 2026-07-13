#include <iostream>
using namespace std;

int main()
{
    int customer, units;

    cout << "Registered Customer? (1=Yes, 0=No): ";
    cin >> customer;

    if(customer == 1)
    {
        cout << "Enter Units: ";
        cin >> units;

        if(units > 300)
        {
            cout << "High Electricity Usage.";
        }
        else
        {
            cout << "Normal Electricity Usage.";
        }
    }
    else
    {
        cout << "Customer Not Registered.";
    }

    return 0;
} 