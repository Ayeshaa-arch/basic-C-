#include<iostream>
using namespace std;
int main()
{
	int num,a,b;
	cout<<"Enter 3-digits : ";
	cin>>num;
	a = num/100;
	num = num%100;
	b = num/10;
	num = num%10;
	cout<< "Number in reverse order is : "<<num<<b<<a;
	return 0;
}
