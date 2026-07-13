#include <iostream>
using namespace std;

int main()
{
    int bill;

    cout << "Enter Total Bill: ";
    cin >> bill;

    if(bill >= 500)
    {
        cout << "You are eligible for a free drink";
    }

    return 0;
}
