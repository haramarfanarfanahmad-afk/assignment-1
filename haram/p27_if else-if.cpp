#include <iostream>
using namespace std;

int main()
{
    int salary;

    cout << "Enter Monthly Salary: ";
    cin >> salary;

    if(salary >= 100000)
        cout << "High Tax";
    else if(salary >= 70000)
        cout << "Medium Tax";
    else if(salary >= 40000)
        cout << "Low Tax";
    else
        cout << "No Tax";

    return 0;
}