#include<iostream>
using namespace std;
int main()
{
	int n,a,f;
	a=1;
	f=1;
	cout<<"Enter  number : ";
	cin>>n;
	while(a<=n)
	{
		f=f*a;
		a++;
	}
	cout<<"Factorial of "<<n<<" is "<<f;
	return 0;
}
