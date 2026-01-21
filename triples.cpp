//WAP that request the user to type a number, if number is not -999 then print its triple.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	if(n!= -999)
	{
		cout<<"Triple number is "<<n*3;
	}
	else
	{
		cout<<"Number is -999.";
	}
	return 0;
}
