#include <iostream>
using namespace std;

int main()
{
    int billAmount;

    cout << "Enter Bill Amount: ";
    cin >> billAmount;

    if(billAmount >= 5000)
    {
        cout << "You are eligible for a discount";
    }

    return 0;
}