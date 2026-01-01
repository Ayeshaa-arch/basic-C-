#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,sum ,pro;
	float avg;
	cout<<"Enter your first integer = ";
	cin>>a;
	cout<<"Enter your second integer = ";
	cin>>b;
	cout<<"Enter your third integer = ";
	cin>>c;
	cout<<"Enter your fourth integer = ";
	cin>>d;
	sum = a+b+c+d;
	pro = a*b*c*d;
	avg = sum/4;
	cout<<"Sum = "<<sum<<endl;
	cout<<"Product = "<<pro<<endl;
	cout<<"Average = "<<avg<<endl;
	return 0;
}
