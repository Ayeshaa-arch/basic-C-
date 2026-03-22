#include<iostream>
using namespace std;
int main()
{
	int n, evensum=0 , oddsum=0 ;
	cout<<"Enter a positive number : ";
	cin>>n;
	while(n>=0)
	{
		if(n%2==0)
		evensum= evensum+n;
		else
		oddsum= oddsum+n;
		n--;
	}
	cout<<"The sum of even digits is :"<<evensum<<endl;
	cout<<"The sum of odd digits is :"<<oddsum<<endl;
	return 0;
}
