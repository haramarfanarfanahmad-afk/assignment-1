#include<iostream>
using namespace std;
int main(){
    int password;

    cout<<"Enter Password: ";
    cin>>password;

    if(password == 1234)
    {
        cout<<"Correct Password";
    }
    else if(password == 0000)
    {
        cout<<"Default Password";
    }
    else
    {
        cout<<"Invalid Password";
    }

    return 0;
}