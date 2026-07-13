#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Employee Attendance Menu =====" << endl;
    cout << "1. Mark Attendance" << endl;
    cout << "2. View Attendance" << endl;
    cout << "3. Apply Leave" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Attendance Marked Successfully";
            break;

        case 2:
            cout << "Attendance Record Displayed";
            break;

        case 3:
            cout << "Leave Application Submitted";
            break;

        case 4:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}