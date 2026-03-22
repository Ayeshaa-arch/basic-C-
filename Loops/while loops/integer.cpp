#include<iostream>
using namespace std;
int main()
{
	int n,a,b,sum=0;
	cout<<"Enter an integer: ";
	cin>>n;
	a=n;
	while(n!=0)
	{
		b=n%10;
		if(b==0)
		sum=sum+a;
		else
		sum=sum+b;
		n=n/10;	
	}
	cout<<"The sum of digits of: "<<a<<"="<<sum;
	return 0;
}
