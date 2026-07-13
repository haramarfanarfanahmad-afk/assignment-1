#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Student Result Menu =====" << endl;
    cout << "1. View Result" << endl;
    cout << "2. View Marks" << endl;
    cout << "3. View Grade" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Displaying Result...";
            break;
        case 2:
            cout << "Displaying Marks...";
            break;
        case 3:
            cout << "Displaying Grade...";
            break;
        case 4:
            cout << "Thank You!";
            break;
        default:
            cout << "Invalid Choice";
    }

    return 0;
}