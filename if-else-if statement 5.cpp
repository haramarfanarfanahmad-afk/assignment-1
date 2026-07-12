#include<iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Number is Even";
    }
    else if (num % 2 != 0)
    {
        cout << "NOT Even";
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}