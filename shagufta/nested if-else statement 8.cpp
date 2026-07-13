#include<iostream>
using namespace std;
int main(){
    int salary;

    cout<<"Enter Salary: ";
    cin>>salary;

    if(salary > 0)
    {
        if(salary > 50000)
        {
            cout<<"Salary is above than 50,000";
        }
        else
        {
            if(salary == 50000)
            {
                cout<<"Salary is exactly 50,000";
            }
            else
            {
                cout<<"Salary is below than 50,000";
            }
        }
    }
    else
    {
        cout<<"Invalid Salary";
    }

    return 0;
}