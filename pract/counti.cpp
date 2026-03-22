// WAP to print counting from 1 to 10
#include<iostream>
using namespace std;
int main()
{
	int i,s,e; // i is loop variable
	cout<<"Enter starting and ending number: ";
	cin>>s>>e;
	i=s; // starting value of loop
	while(i<=e) // ending value of loop
	{
		cout<<i<<endl;
		i++;
	}
	cout<<"End of Program: ";
	return 0;
}
