#include<iostream>
using namespace std;
int main()
{
	int n,p,c;
	for(n=11;n<=25;n=n+2)
	{
		p=1;
		for(c=2;c<=n/2;c++)
		if(n%c==0)
		{
			p=0;
			break;
		}
		if(p==1)
		cout<<n<<"is a prime number."<<endl;
		else
		cout<<n<<"is not a prime number."<<endl;
	}
	return 0;
}
