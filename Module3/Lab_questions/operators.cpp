#include <iostream>
using namespace std;

main() {
    int a = 10, b = 5;
    
    cout << "a + b = " << a + b << "\n";
    cout << "a - b = " << a - b << "\n";

    cout << "a == b: " << (a == b) << "\n";
    cout << "a != b: " << (a != b) << "\n";

    cout << "(a > b) && (b > 0): " << ((a > b) && (b > 0)) << "\n";
}

