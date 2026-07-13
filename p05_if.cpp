#include <iostream>
using namespace std;

int main()
{
    int units;

    cout << "Enter Electricity Units: ";
    cin >> units;

    if(units > 300)
    {
        cout << "High Electricity Usage";
    }

    return 0;
}