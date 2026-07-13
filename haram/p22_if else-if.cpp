#include <iostream>
using namespace std;

int main()
{
    int years;

    cout << "Enter Years of Service: ";
    cin >> years;

    if(years >= 10)
        cout << "Bonus: 30%";
    else if(years >= 5)
        cout << "Bonus: 20%";
    else if(years >= 2)
        cout << "Bonus: 10%";
    else
        cout << "No Bonus";

    return 0;
}