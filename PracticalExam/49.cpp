//Create a template function to swap two values.

#include <iostream>
using namespace std;

template <class T>
void swap_values(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;
    cout << "Before swapping: " << a << " " << b << endl;
    swap_values(a, b);
    cout << "After swapping: " << a << " " << b << endl;

    float x = 10.5, y = 20.5;
    cout << "Before swapping: " << x << " " << y << endl;
    swap_values(x, y);
    cout << "After swapping: " << x << " " << y << endl;
    
    return 0;
}