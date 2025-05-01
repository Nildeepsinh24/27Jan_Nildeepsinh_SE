#include <iostream>
using namespace std;

int globalVar = 10;

void showLocalScope() {
    int globalVar = 5; 
    cout << "Inside Local variable: " << globalVar << "\n";
}

void showGlobalScope() {
    cout << "Inside Global variable: " << ::globalVar << "\n";
}

int main() {
    cout << "In main - Global variable: " << globalVar << "\n";

    showLocalScope();
    showGlobalScope();

    return 0;
}

