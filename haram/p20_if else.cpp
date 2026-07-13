#include <iostream>
using namespace std;

int main()
{
    string username, password;

    cout << "Enter Username: ";
    cin >> username;

    cout << "Enter Password: ";
    cin >> password;

    if(username == "admin" && password == "1234")
    {
        cout << "Login Successful";
    }
    else
    {
        cout << "Invalid Username or Password";
    }

    return 0;
}