#include <iostream>
using namespace std;

int main()
{
    int registered, seats;

    cout << "Registered Passenger? (1=Yes, 0=No): ";
    cin >> registered;

    if(registered == 1)
    {
        cout << "Enter Available Seats: ";
        cin >> seats;

        if(seats > 0)
        {
            cout << "Ticket Booked Successfully.";
        }
        else
        {
            cout << "No Seats Available.";
        }
    }
    else
    {
        cout << "Please Register First.";
    }

    return 0;
}