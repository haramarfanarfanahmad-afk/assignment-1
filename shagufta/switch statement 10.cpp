#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter Number (1-3): ";
    cin>>num;

    switch(num)
    {
        case 1:
            cout<<"You entered One";
            break;

        case 2:
            cout<<"You entered Two";
            break;

        case 3:
            cout<<"You entered Three";
            break;

        default:
            cout<<"Invalid Number";
    }

    return 0;
}