#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int n,i,loc=-1;
	for(i=0;i<=9;i++)
	{
		cin>>arr[i];
		}	
		cout<<"Enter a number to find: ";
		cin>>n;
		for(i=0;i<=9;i++)
		{
			if(n==arr[i])
			{
				loc=i;
			}
		}
			if(loc==-1)
			cout<<"Number not found.";
			else
			cout<<"Number found."<<loc+1;
		
	return 0;
}
