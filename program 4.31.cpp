#include<iostream>
using namespace std;
int main()
{
	long int num,a,b,c,d;
	cout<<"Enter 5-digits : ";
	cin>>num;
	a = num/10000;
	num = num%10000;
	b = num/1000;
	num = num%1000;
	c = num/100;
	num = num%100;
	d = num/10;
	num = num%10;
	cout<<"Number in reverse is : "<<num<<d<<c<<b<<a;
	return 0;
}
