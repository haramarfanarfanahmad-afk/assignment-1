#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===== Library Menu =====" << endl;
    cout << "1. Issue Book" << endl;
    cout << "2. Return Book" << endl;
    cout << "3. Search Book" << endl;
    cout << "4. Exit" << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Book Issued Successfully";
            break;

        case 2:
            cout << "Book Returned Successfully";
            break;

        case 3:
            cout << "Searching Book...";
            break;

        case 4:
            cout << "Thank You!";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}