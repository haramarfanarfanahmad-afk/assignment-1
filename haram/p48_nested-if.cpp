#include <iostream>
using namespace std;

int main()
{
    int member, books;

    cout << "Library Member? (1=Yes, 0=No): ";
    cin >> member;

    if(member == 1)
    {
        cout << "Enter Available Books: ";
        cin >> books;

        if(books > 0)
        {
            cout << "Book Issued Successfully.";
        }
        else
        {
            cout << "No Books Available.";
        }
    }
    else
    {
        cout << "Please Register as a Library Member.";
    }

    return 0;
}