#include <iostream>
using namespace std;

int main()
{
    int attendance;

    cout << "Enter Attendance Percentage: ";
    cin >> attendance;

    if(attendance >= 80)
    {
        cout << "Attendance Requirement Met";
    }

    return 0;
}