#include <iostream>
using namespace std;

int main()
{
    int employeeID, attendance;

    cout << "Enter Employee ID: ";
    cin >> employeeID;

    if(employeeID > 0)
    {
        cout << "Enter Attendance Percentage: ";
        cin >> attendance;

        if(attendance >= 80)
        {
            cout << "Employee Eligible for Bonus.";
        }
        else
        {
            cout << "Employee Not Eligible for Bonus.";
        }
    }
    else
    {
        cout << "Invalid Employee ID.";
    }

    return 0;
}