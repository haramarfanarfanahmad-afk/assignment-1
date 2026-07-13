#include <iostream>
using namespace std;

int main()
{
    int member, bill;

    cout << "Membership? (1=Yes, 0=No): ";
    cin >> member;

    if(member == 1)
    {
        cout << "Enter Bill Amount: ";
        cin >> bill;

        if(bill >= 500)
        {
            cout << "Discount Applied.";
        }
        else
        {
            cout << "No Discount.";
        }
    }
    else
    {
        cout << "Membership Required.";
    }

    return 0;
}