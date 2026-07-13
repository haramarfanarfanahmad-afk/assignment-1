#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter a Number: ";
    cin>>num;

    if(num<100)
    {
        cout<<"Number is less than 100";
    }
    else if(num==100)
    {
        cout<<"Number is equal to 100";
    }
    else
    {
        cout<<"Number is greater than 100";
    }

    return 0;
}