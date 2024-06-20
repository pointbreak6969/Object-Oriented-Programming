// compute the roots of quadratic equation using function template.

#include <iostream>
#include <cmath>
using namespace std;

template <class T>
void roots(T a, T b, T c){
    T d = b * b - 4 * a * c;
    if (d > 0){
        T r1 = (-b + sqrt(d)) / (2 * a);
        T r2 = (-b - sqrt(d)) / (2 * a);
        cout << "Root 1: " << r1 << endl;
        cout << "Root 2: " << r2 << endl;
    }
    else if (d == 0){
        T r = -b / (2 * a);
        cout << "Root: " << r << endl;
    }
    else{
        cout << "No real roots" << endl;
    }
}
int main(){
    roots(1, 5, 6);
    roots(1.5, 3.5, 1.5);
    return 0;
}