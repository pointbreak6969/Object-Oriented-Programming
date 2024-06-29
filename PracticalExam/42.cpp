// WAP using function template, to accept five integers and display the largest among them, and also
// five floating numbers and display the largest among them.

#include <iostream>
using namespace std;

template <class T>
void largest(T arr[5]){
    T largest = arr[0];
    for (int i = 0; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Largest: " << largest << endl;
}
int main(){
int intArr[5] = {5,6,7,8,9};
largest(intArr);
float floatArr[5] = {5.5, 6.6, 7.7, 8.8, 9.9};
largest(floatArr);
}