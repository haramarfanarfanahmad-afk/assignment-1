#include <iostream>
using namespace std;

int main()
{
    int seats;

    cout << "Enter Available Seats: ";
    cin >> seats;

    if(seats > 0)
    {
        cout << "Seat Booked";
    }
    else
    {
        cout << "No Seats Available";
    }

    return 0;
}