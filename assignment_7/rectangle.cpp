#include <iostream>

using namespace std; 

class Rectangle {
    public:
        // attributes
        float length;
        float width;

        // methods
        void setLength(float);
        void setWidth(float);
        float area();
        float perimeter();
        void show();
        int sameArea(Rectangle rect);
        // constructor
        // Can we use the smae name
        //  * for example in java:
        //    this.length = length;
        //    this.width = width;
        // What does -> mean
        Rectangle(float l, float w) {
            length = l;
            width = w;
        }

};

// Method/function definition outside the class
void Rectangle::setLength(float _l) {
    length = _l;
}

void Rectangle::setWidth(float _w) {
    width = _w;
}

float Rectangle::area() {
    return length * width;
}

float Rectangle::perimeter(){
    return (2 * length) + (2 * width);
}

void Rectangle::show(){
    cout << "length: " << length << endl;
    cout << "width: " << width << endl;
}

int Rectangle::sameArea(Rectangle rect){
    if (area() == rect.area()) {
        return 1;
    }
    return 0;
}