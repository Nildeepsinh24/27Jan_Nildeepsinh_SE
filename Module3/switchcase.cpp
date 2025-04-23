#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    cout << "Enter Number For A: ";
    cin >> a;

    cout << "Enter Number For B: ";
    cin >> b;

	cout << "\nEnter 1 For Addition: ";
	cout << "\nEnter 2 For Subtraction: ";
	cout << "\nEnter 3 For Multiplication: ";
	cout << "\nEnter 4 For Division: ";
	
    cout << "\n\n****Enter Your Choice****\n";
    cin >> n;
    
    switch(n){
    	case 1:
    		cout << "\nAddition : "<<a+b;
    		break;
    	case 2:
    		cout << "\nsubtraction : "<<a-b;
    		break;
    	case 3:
    		cout << "\nmultiplication : "<<a*b;
    		break;
    	case 4:
    		cout << "\ndivision : "<<a/b;
    		break;
    		
    	default:
    		cout << "\nInvalid Choice! Enter A Valid choice";
    		break;
	}
}

