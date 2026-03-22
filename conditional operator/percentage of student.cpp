#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,n4,n5;
	float Result;
	cout<<"Enter marks of each subject : ";
	cin>>n1>>n2>>n3>>n4>>n5;
	cout<<"percentage of student: "<<(n1+n2+n3+n4+n5)*100/500<<endl;
	cout<<"Result is "<<(Result>=0?"Pass":"Fail");
	return 0;
}
