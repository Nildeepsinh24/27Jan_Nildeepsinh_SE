#include<iostream>
using namespace std;

int main()
{
    int i, n, total = 0, per, sub;
    
    cout << "Enter how many subjects: ";
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cout << "Enter marks for SUBJECT " << (i + 1) << ": ";
        cin >> sub;
        total += sub;
    }  
    per = (total * 100) / (n * 100);
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << per << "%";

}

