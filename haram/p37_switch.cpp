#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Bus Ticket Menu =====" << endl;
    cout << "1. Book Ticket" << endl;
    cout << "2. Cancel Ticket" << endl;
    cout << "3. View Schedule" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Ticket Booked Successfully";
            break;

        case 2:
            cout << "Ticket Cancelled";
            break;

        case 3:
            cout << "Bus Schedule Displayed";
            break;

        case 4:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}