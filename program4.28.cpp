#include<iostream>
using namespace std;
int main()
{
	float area, radius,cir;
	cout<<"Enter Radius : ";
	cin>>radius;
	area = radius * radius*3.14;
	cir = 2*3.14*radius;
	cout<<"Area : "<<area<<endl;
	cout<<"Circumference : "<<cir<<endl;
	return 0;
}
