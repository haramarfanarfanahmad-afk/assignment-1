#include <iostream>
using namespace std;

int main()
{
    int grade;

    cout << "Enter Grade Code (1-5): ";
    cin >> grade;

    switch (grade)
    {
    case 1:
        cout << "Grade A";
        break;

    case 2:
        cout << "Grade B";
        break;

    case 3:
        cout << "Grade C";
        break;

    case 4:
        cout << "Grade D";
        break;

    case 5:
        cout << "Fail";
        break;

    default:
        cout << "Invalid Grade Code";
    }

    return 0;
}
