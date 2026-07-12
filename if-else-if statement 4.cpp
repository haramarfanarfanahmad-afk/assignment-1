#include<iostream>
using namespace std;
int main() {
    int mark;

    cout << "Enter Marks: ";
    cin >> mark;

    if (mark >= 90)
    {
        cout << "Excellent Marks";
    }
    else if (mark < 90)
    {
        cout << "Not Good";
    }
    else
    {
        cout << "Invalid";
    }

    return 0;
}