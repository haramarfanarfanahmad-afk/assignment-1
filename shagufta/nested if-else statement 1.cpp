#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter a Number: ";
    cin>>num;

    if(num>=0)
    {
        if(num>0)
        {
            cout<<"Positive Number";
        }
        else
        {
            cout<<"Number is Zero";
        }
    }
    else
    {
        if(num<0)
        {
            cout<<"Negative Number";
        }
        else
        {
            cout<<"Invalid Number";
        }
    }

    return 0;
}