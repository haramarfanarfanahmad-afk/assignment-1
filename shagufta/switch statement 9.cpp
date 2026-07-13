#include<iostream>
using namespace std;

int main(){
    int choice;

    cout<<"1. pkr"<<endl;
    cout<<"2. SAR"<<endl;
    cout<<"3. USD"<<endl;

    cout<<"Choose Currency: ";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"Pakistan Rupees Selected";
            break;
        case 2:
            cout<<"Saudi Riyal Selected";
            break;
        case 3:
            cout<<"US Dollar Selected";
            break;
        default:
            cout<<"Invalid Choice";
    }

    return 0;
}