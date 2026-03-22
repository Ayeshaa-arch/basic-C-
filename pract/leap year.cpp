#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter year:";
	cin>>year;
	if(year%4==0)
	cout<<"is a leap year.";
	else
	cout<<"is not a leap year.";
	
	return 0;
}
