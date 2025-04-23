#include<iostream>
using namespace std;

int main()
{

    int n,i;
    cout << "Enter number of students: ";
    cin >> n;

    int id[n];
    string name[n];
    int sub[n][4];
    int total[n];
	float per[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter ID for student " << i + 1 << ": ";
        cin >> id[i];

        cout << "Enter name for student " << i + 1 << ": ";
        cin >> name[i];

        cout << "Enter marks for 4 subjects:\n";
        cout << "Subject 1: ";
        cin >> sub[i][0];
        cout << "Subject 2: ";
        cin >> sub[i][1];
        cout << "Subject 3: ";
        cin >> sub[i][2];
        cout << "Subject 4: ";
        cin >> sub[i][3];

        total[i] = sub[i][0] + sub[i][1] + sub[i][2] + sub[i][3];
        per[i] = total[i] / 4.0;
    }

    cout << "\n--- Student Details ---\n";
    for(int i = 0; i < n; i++)
    {
        cout << "\nID    : " << id[i];
        cout << "\nName  : " << name[i];
        cout << "\nTotal : " << total[i] ;
		cout<<"\nPER Is:"<<per[i]<< "\n";
    }

    return 0;
}

