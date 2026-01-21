//WAP that request the user to input 5 numbers, and then find how many numbers are b/w 1 and 100.
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,n4,n5,count=0;
	cout<<"Enter number 1: ";
	cin>>n1;	// --> 101
	if(n1>=1 && n1<=100) //--> false
	count++; // count = count + 1;
	cout<<"Enter number 2: ";
	cin>>n2; // 90	
	if(n2>=1 && n2<=100)
	count++; // --> 1
	cout<<"Enter number 3: ";
	cin>>n3;
	if(n3>=1 && n3<=100) 
	count++;
	cout<<"Enter number 4: ";
	cin>>n4;
	if(n4>=1 && n4<=100) 
	count++;
	cout<<"Enter number 5: ";
	cin>>n5;	
	if(n5>=1 && n5<=100) 
	count++;
	cout<<"Counting is "<<count;
	return 0;
}
