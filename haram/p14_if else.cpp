#include <iostream>
using namespace std;

int main()
{
    int bill;

    cout << "Enter Bill Amount: ";
    cin >> bill;

    if(bill >= 500)
    {
        cout << "Free Drink Awarded";
    }
    else
    {
        cout << "No Free Drink";
    }

    return 0;
}