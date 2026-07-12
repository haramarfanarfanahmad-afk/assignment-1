#include<iostream>
using namespace std;
int main() {
    int temp;

    cout << "Enter Temperature: ";
    cin >> temp;

    if (temp > 35)
    {
        cout << "Temperature is above 35";
    }
    else if (temp <= 35)
    {
        cout << "Temperature is below 35";
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}