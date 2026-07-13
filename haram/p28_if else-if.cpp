#include <iostream>
using namespace std;

int main()
{
    int temp;

    cout << "Enter Temperature: ";
    cin >> temp;

    if(temp >= 40)
        cout << "Very Hot";
    else if(temp >= 30)
        cout << "Hot";
    else if(temp >= 20)
        cout << "Pleasant";
    else
        cout << "Cold";

    return 0;
}