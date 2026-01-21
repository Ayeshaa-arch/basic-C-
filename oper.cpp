// operations 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n1,n2;
	char op;
	cout<<"Enter 1st number : ";
	cin>>n1;
	cout<<"Enter operation: ";
	op=getche();
	cout<<"\nEnter 2nd number: ";
	cin>>n2;
	switch(op)
	
	{
	case '+':
	cout<<"Sum is : "<<n1+n2;
	break;
	case '*':
	cout<<"Product is : "<<n1*n2;
	break;
	case '-':
	cout<<"Subtract is : "<<n1-n1;
	break;
	case '/':
	cout<<"Divison is : "<<n1/n2;
	break;
	case '%':
	cout<<"Modulus is : "<<n1%n2;
	break;
	default:
		cout<<"Invalid operator!";
	}
	
	return 0;
}
