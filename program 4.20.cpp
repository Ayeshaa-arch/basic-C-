#include<iostream>
using namespace std;
int main()
{
	int  div, divsr,q,r;
	cout<<"Enter dividend and diviser = ";
	cin>>div>>divsr;
	q = div/divsr;
	r = div % divsr;
	cout<<"Quotient = "<<q<<endl;
	cout<<"Remainder = "<<r;
	return 0;	
}
