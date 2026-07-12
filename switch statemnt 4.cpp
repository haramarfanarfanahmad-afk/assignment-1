#include<iostream>
using namespace std;
int main(){
    int choice;

    cout<<"1. Tea"<<endl;
    cout<<"2. Coffee"<<endl;
    cout<<"3. Juice"<<endl;

    cout<<"Enter Choice: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Tea Selected";
            break;
        case 2:
            cout<<"Coffee Selected";
            break;
        case 3:
            cout<<"Juice Selected";
            break;
        default:
            cout<<"Invalid Choice";
    }

    return 0;
}