#include <iostream>
using namespace std;
int main()
{
	int n ,a,b,sum;
	cout<<"Enter 3 digit number = ";
	cin>>n;
	a = n/100;
	n = n%100;
	b = n/10;
	n = n%10;
	sum = a+b+n;
	cout<<" Sum is : "<<sum;
	return 0;
	}
