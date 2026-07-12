#include <iostream>
using namespace std;

int main()
{
    int grade;

    cout << "Enter Grade Code (1-5): ";
    cin >> grade;

    if (grade == 1)
        cout << "Grade A";
    else if (grade == 2)
        cout << "Grade B";
    else if (grade == 3)
        cout << "Grade C";
    else if (grade == 4)
        cout << "Grade D";
    else if (grade == 5)
        cout << "Fail";
    else
        cout << "Invalid Grade Code";

    return 0;
}
