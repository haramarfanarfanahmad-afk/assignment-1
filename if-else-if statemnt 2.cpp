#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your Age";
	cin>>age;
	if(age>=18)
	{
		cout<<"Person is 18 or above";
	}
	else if(age<18)
	{
		cout<<"Person is not 18 years old or below 18";
	}
	
		else
	{
		cout<<"Invalid Age";
	}
	return 0;
}