#include<iostream>
using namespace std;
int main()
{
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		cout<<"Enter an integer: ";
		cin>>arr[i];
	}
		cout<<"The values in arrays are: "<<endl;
		for(i=0;i<10;i++)
		cout<<arr[i]<<endl;
	return 0;
}
