#include <iostream>
using namespace std;

int main()
{
    int marks, attendance;

    cout << "Enter Marks: ";
    cin >> marks;

    if(marks >= 50)
    {
        cout << "Enter Attendance Percentage: ";
        cin >> attendance;

        if(attendance >= 75)
        {
            cout << "Student Passed and Eligible for Exam.";
        }
        else
        {
            cout << "Attendance Short.";
        }
    }
    else
    {
        cout << "Student Failed.";
    }

    return 0;
}