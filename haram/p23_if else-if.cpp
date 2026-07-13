#include <iostream>
using namespace std;

int main()
{
    int speed;

    cout << "Enter Internet Speed (Mbps): ";
    cin >> speed;

    if(speed >= 100)
        cout << "Excellent";
    else if(speed >= 50)
        cout << "Good";
    else if(speed >= 20)
        cout << "Average";
    else
        cout << "Poor";

    return 0;
}