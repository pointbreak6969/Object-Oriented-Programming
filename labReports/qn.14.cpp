// wap to implement function overloading in c++

#include <iostream>
using namespace std;
class Shape {
public:
    void area(int side) {
        cout << "Area of square: " << side * side << endl;
    }

    void area(int length, int width) {
        cout << "Area of rectangle: " << length * width << endl;
    }

    void area(double radius) {
        double area = 3.14 * radius * radius;
        cout << "Area of circle: " << area << endl;
    }
    void volume(int length, int breadth, int height){
        int volume = length * breadth * height;
        cout << "Volume of rectangle: " << volume << endl;
    }
    void volume(int side){
        int volume = side * side * side;
        cout << "Volume of cube: " << volume << endl;
    }
};

int main() {
    Shape shape;
    shape.area(5); // Calling the area() function with one argument
    shape.area(4, 6); // Calling the area() function with two arguments
    shape.area(3.5); // Calling the area() function with a double argument
    shape.volume(4, 5, 6); // Calling the volume() function with three arguments
    shape.volume(5); // Calling the volume() function with one argument

    return 0;
}