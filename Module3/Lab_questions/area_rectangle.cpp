#include <iostream>
using namespace std;

class Rectangle{
   	int length;
    int width;

public:
    Rectangle(int l, int w) 
	{
        length = l;
        width = w;
    }

    int calculateArea() 
	{
        return length * width;
    }
};

int main() {
    int length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rect(length, width);
    int area = rect.calculateArea();

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}

