#include<iostream>
using namespace std;
int main() {
    int num;

    cout << "Enter a Number: ";
    cin >> num;

    if(num >= 0)
    {
        if(num % 2 == 0)
        {
            cout << "Number is Even";
        }
        else
        {
            cout << "NOT Even";
        }
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}