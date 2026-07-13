#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Login Menu =====" << endl;
    cout << "1. Login" << endl;
    cout << "2. Change Password" << endl;
    cout << "3. Forgot Password" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Login Selected";
            break;

        case 2:
            cout << "Password Change Selected";
            break;

        case 3:
            cout << "Password Recovery Selected";
            break;

        case 4:
            cout << "Program Closed";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}