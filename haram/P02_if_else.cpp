#include <iostream>
using namespace std;

int main()
{
    int grade;

    cout << "Enter Grade Code (1-5): ";
    cin >> grade;

    if (grade == 1)
    {
        cout << "Grade A";
    }
    else
    {
        cout << "Grade is not A";
    }

    return 0;
}
