#include<iostream>
using namespace std;
int main()
{
	float a,b;
	a=2;
	b=1;
	while(a<=100)
	{
		b=b+1/a;
		a=a+2;
	}
	cout<<"Result is "<<b;
	return 0;
}
