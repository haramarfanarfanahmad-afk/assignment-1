#include <iostream>
using namespace std;

int main()
{
    int member, bill;

    cout << "Premium Member? (1=Yes, 0=No): ";
    cin >> member;

    if(member == 1)
    {
        cout << "Enter Bill Amount: ";
        cin >> bill;

        if(bill >= 5000)
        {
            cout << "30% Discount Applied.";
        }
        else
        {
            cout << "10% Discount Applied.";
        }
    }
    else
    {
        cout << "No Premium Discount.";
    }

    return 0;
}