#include<iostream>
using namespace std;
int main()
{
	int total, obtained;
	float per;
	cout<<"Enter total marks = "<<endl;
	cin>>total;
	cout<<"Enter obtained marks = "<<endl;
	cin>>obtained;
	per = (float)obtained/(float)total *100;
	cout<<"Percentage : "<<per;
	return 0;
}
