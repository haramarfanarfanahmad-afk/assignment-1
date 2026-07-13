#include<iostream>
using namespace std;

int main(){
    char ch;

    cout<<"Enter a Character: ";
    cin>>ch;

    if(ch=='A')
    {
        cout<<"Character is A";
    }
    else
    {
        if(ch=='B')
        {
            cout<<"Character is B";
        }
        else
        {
            cout<<"Character is not A or B";
        }
    }

    return 0;
}