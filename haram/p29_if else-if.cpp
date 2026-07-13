#include <iostream>
using namespace std;

int main()
{
    int points;

    cout << "Enter Reward Points: ";
    cin >> points;

    if(points >= 1000)
        cout << "Platinum Member";
    else if(points >= 700)
        cout << "Gold Member";
    else if(points >= 300)
        cout << "Silver Member";
    else
        cout << "Regular Member";

    return 0;
}