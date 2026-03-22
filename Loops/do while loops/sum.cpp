//while loop
#include<iostream>
using namespace std;
int main()
{
	int i,sum;
	i=1;
	sum=0;
	do
	{
		cout<<i<<endl;
		sum=sum+i;
		i++;
	}while(i<=5);
	cout<<"Sum is "<<sum;
	return 0;
	
}
