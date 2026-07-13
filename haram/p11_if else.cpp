#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter Marks: ";
    cin >> marks;

    if(marks >= 50)
    {
        cout << "Student Passed";
    }
    else
    {
        cout << "Student Failed";
    }

    return 0;
}