#include <iostream>
#include "rectangle.cpp"
#include "sample.cpp"


using namespace std; 

int main () {

    // Is this correct syntax ?
    // Rectangle rect(1, 2) right
    // Rectangle rect = new Rectangle(2, 2); wrong ?
    Rectangle rect1(5,2.5);
    Rectangle rect2(5,18.9);

    cout << "Rectangle 1 Area: " << rect1.area() << endl;
    cout << "Rectangle 1 Perimeter: " << rect1.perimeter() << endl;

    cout << "Rectangle 2 Area: " << rect2.area() << endl;
    cout << "Rectangle 2 Perimeter: " << rect2.perimeter() << endl;

    
    // check area
    cout << "Same Area? " << rect1.sameArea(rect2) << endl;

    //update length and width
    rect1.setLength(15);
    rect1.setWidth(6.3);

    cout << "Rectangle 1 Area: " << rect1.area() << endl;
    cout << "Rectangle 1 Perimeter: " << rect1.perimeter() << endl;

    cout << "Rectangle 2 Area: " << rect2.area() << endl;
    cout << "Rectangle 2 Perimeter: " << rect2.perimeter() << endl;

    cout << "Same Area? " << rect1.sameArea(rect2) << endl;
    
    cout << "\nTesting Sample class..." << endl;
    // Constructor 1
    Sample samp1;
    cout << "x: " << samp1.getX() << " y: " << samp1.getY() << endl;

    // Constructor 2
    Sample samp2(1);
    cout << "x: " << samp2.getX() << " y: " << samp2.getY() << endl;

    // Constructor 3
    Sample samp3(2, 2);
    cout << "x: " << samp3.getX() << " y: " << samp3.getY() << endl;

    // Constructor 4
    Sample samp4(5, 10.0);
    cout << "x: " << samp4.getX() << " y: " << samp4.getY() << endl;
    return 0;
}
