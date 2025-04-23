#include<iostream>
using namespace std;
main()
{
	int a;
	cout<<"Enter Value for A:";
	cin>>a;
	
	if(a<0)
	{
		cout<<"Number is -ve";
	}
	else if(a>0)
	{
		cout<<"Number is +ve";
	}
	else 
	{
		cout<<"Number is Zero";
	}
}
