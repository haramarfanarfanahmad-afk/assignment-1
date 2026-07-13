#include <iostream>
using namespace std;

int main()
{
    string username;

    cout << "Enter Username: ";
    cin >> username;

    if(username == "admin")
    {
        cout << "Username Found";
    }

    return 0;
}