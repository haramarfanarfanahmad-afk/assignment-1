#include<iostream>
using namespace std;
int main(){
    char light;

    cout<<"Enter Traffic Light: ";
    cin>>light;

    switch(light){
        case 'R':
        case 'r':
            cout<<"Stop";
            break;
        case 'Y':
        case 'y':
            cout<<"Wait";
            break;
        case 'G':
        case 'g':
            cout<<"Go";
            break;
        default:
            cout<<"Invalid Signal";
    }

    return 0;
}