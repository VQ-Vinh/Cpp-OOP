/*
Use object-oriented programming to solve the following exercise:

Write a program to input the length and width of a rectangle from the keyboard and display it on the screen:

Area = {P1}
Perimeter = {P2}
With {P1} and {P2} These are the area and perimeter of that rectangle, respectively.

For example, if you type:

4.5
5.5
Then the screen will display:

Area: 24.75
Perimeter: 20
*/
#include <iostream>

using namespace std;

class Rectangle {
public:
    double width;
    double length;

    void getInformation() {
        cin >> width;
        cin >> length;
    }

    double getArea() {
        return width * length;
    }

    double getPerimeter() {
        return (width + length) * 2;
    }

    double display() {
        cout << "Area: " << getArea() << endl;
        cout << "Permeter " << getPerimeter() << endl;
    }
}; 

int main() {
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}