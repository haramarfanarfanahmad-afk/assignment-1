#include <iostream>
using namespace std;

int main()
{
    int units;

    cout << "Enter Units Consumed: ";
    cin >> units;

    if(units <= 100)
        cout << "Low Usage";
    else if(units <= 300)
        cout << "Normal Usage";
    else if(units <= 500)
        cout << "High Usage";
    else
        cout << "Very High Usage";

    return 0;
}