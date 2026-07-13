#include <iostream>
using namespace std;

int main()
{
    int books;

    cout << "Enter Available Books: ";
    cin >> books;

    if(books > 0)
    {
        cout << "Book Issued";
    }
    else
    {
        cout << "Book Not Available";
    }

    return 0;
}