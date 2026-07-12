#include<iostream>
using namespace std;
int main(){
    int password;

    cout<<"Enter Password: ";
    cin>>password;

    if(password != 0)
    {
        if(password == 1234)
        {
            cout<<"Correct Password";
        }
        else
        {
            cout<<"Invalid Password";
        }
    }
    else
    {
        cout<<"Password cannot be zero";
    }

    return 0;
}