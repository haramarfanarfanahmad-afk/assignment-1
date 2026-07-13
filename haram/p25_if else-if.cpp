#include <iostream>
using namespace std;

int main()
{
    int fuel;

    cout << "Enter Fuel Percentage: ";
    cin >> fuel;

    if(fuel >= 75)
        cout << "Fuel Tank Full";
    else if(fuel >= 50)
        cout << "Fuel Level Medium";
    else if(fuel >= 25)
        cout << "Fuel Level Low";
    else
        cout << "Refill Required";

    return 0;
}