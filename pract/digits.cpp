#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum=0;
	cout<<"Enter an digits: ";
	cin>>a;
	b=a;
	while(a!=0)
	{
		c=a%10;
		if(c==0)
		sum=sum+a;
		else
		sum=sum+c;
		a=a/10;
	}
	cout<<"Sum of digits of "<<b<<" = "<<sum;
	return 0;
}
