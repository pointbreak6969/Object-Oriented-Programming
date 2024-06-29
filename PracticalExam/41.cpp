//WAP using function template, to accept two integers and display the sum and average, and also
// two floating numbers and display the sum and average,

#include <iostream>
using namespace std;

template <class T>
void display(T a, T b) {
    cout << "Sum: " << a + b << " Average: " << (a + b) / 2 << endl;
}
int main() {
    display(10, 20);
    display(10.5, 20.5);
    return 0;
}