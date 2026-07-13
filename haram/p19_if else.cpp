#include <iostream>
using namespace std;

int main()
{
    int billAmount;

    cout << "Enter Bill Amount: ";
    cin >> billAmount;

    if(billAmount >= 5000)
    {
        cout << "Discount Applied";
    }
    else
    {
        cout << "No Discount";
    }

    return 0;
}