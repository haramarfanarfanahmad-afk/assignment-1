#include<iostream>
using namespace std;

int main() {
    int mark;

    cout << "Enter Marks: ";
    cin >> mark;

    if(mark >= 0)
    {
        if(mark >= 90)
        {
            cout << "Excellent Marks";
        }
        else
        {
            cout << "Not Good";
        }
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}