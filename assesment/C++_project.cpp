#include <iostream>
#include <cmath>
using namespace std;

class Event {
public:
    string eventName, firstName, lastName;
    int guests, minutes;

    void getInput() {
        cout << "Enter Event Name: ";
        cin >> eventName;
        cout << "Enter First Name: ";
        cin >> firstName;
        cout << "Enter Last Name: ";
        cin >> lastName;
        cout << "Enter Number of Guests: ";
        cin >> guests;
        cout << "Enter Duration (in minutes): ";
        cin >> minutes;
    }

    void showSummary() {
        int servers = ceil(guests / 20.0);
        float serverCost = (minutes / 60) * 18.50f + (minutes % 60) * 0.40f;
        float foodCost = guests * 20.70f;
        float avgCost = foodCost / guests;
        float totalCost = foodCost + (servers * serverCost);
        float deposit = totalCost * 0.25f;

        cout << "\n--- Event Summary ---" << endl;
        cout << "Event Name: " << eventName << endl;
        cout << "Organizer: " << firstName << " " << lastName << endl;
        cout << "Guests: " << guests << endl;
        cout << "Duration: " << minutes << " minutes" << endl;
        cout << "Servers Needed: " << servers << endl;
        cout << "Cost per Server: " << serverCost << endl;
        cout << "Food Cost: " << foodCost << endl;
        cout << "Average Cost per Person: " << avgCost << endl;
        cout << "Total Cost: " << totalCost << endl;
        cout << "Deposit (25%): " << deposit << endl;
    }
};

int main() {
    Event e;
    e.getInput();
    e.showSummary();
    return 0;
}

