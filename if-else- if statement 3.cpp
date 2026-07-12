#include<iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a Number:";
    cin >> num;

    if (num % 5 == 0)
    {
        cout << "Number is Divisible by 5";
    }
    else if (num % 5 != 0)
    {
        cout << "Not Divisible by 5";
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}