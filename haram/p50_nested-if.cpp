#include <iostream>
using namespace std;

int main()
{
    string username, password;

    cout << "Enter Username: ";
    cin >> username;

    if(username == "admin")
    {
        cout << "Enter Password: ";
        cin >> password;

        if(password == "1234")
        {
            cout << "Login Successful.";
        }
        else
        {
            cout << "Incorrect Password.";
        }
    }
    else
    {
        cout << "Invalid Username.";
    }

    return 0;
}