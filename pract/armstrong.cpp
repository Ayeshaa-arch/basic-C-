#include<iostream>
using namespace std;
int main()
{
	int n,i,r,sum;
	cout<<"Enter a number : ";
	cin>>n;
	i=n;
	sum=0;
	while(n!=0)
	{
		r=n%10;
		r=r*r*r;
		sum=sum+r;
		n=n/10;
	}
	if(sum==i)
	cout<<sum<<" is a armstrong number.";
	else
	cout<<"is not a armstrong number.";
	return 0;
}
