#include<iostream>
using namespace std;

main()
{
	int stid[5],i,n;
	string name;
	cout << "Enter no. of student:";
	cin >> n;

	for(i=0;i<n;i++)
	{
		cout <<"\nEnter your ID: ";
		cin >> stid[i];
		cout << "Enter your name:";
		cin >> name[i];
	}
	for(i=0;i<n;i++)
		{
			cout <<"\nID["<<i<<"] : "<<stid[i];
			cout <<"\nNAME IS: "<<name[i]<<"\n";
		}
}
