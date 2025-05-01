#include<iostream>
using namespace std;

main()
{
	int stid[5],i,n;
	cout << "Enter no. of student:";
	cin >> n;
	
	for(i=0;i<n;i++)
	{
		cout <<"\nEnter your ID: ";
		cin >> stid[i];
	}
	for(i=0;i<n;i++)
		{
			cout <<"\nID["<<i<<"] : "<<stid[i];
		}
}
