#include<iostream>
using namespace std;
int main()
{
	float area, radius, circumference;
	int choice;
	cout<<"Enter radius: ";
	cin>>radius;
	cout<<"Enter 1 for Area and 2 for circumference: ";
	cin>>choice;
	if(choice ==1)
	{
	area=radius*radius*3.14;
	cout<<"Area:"<<area;}
	else if( choice==2)
	{
	circumference=radius*3.14*2;
	cout<<"Circumference:"<<circumference;}
	else
	cout<<"invalid choice";
	return 0;
}
