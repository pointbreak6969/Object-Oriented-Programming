// Create a class template vector with a type parameter T which holds an array of type T. Also include
// constructor to initialize the objects, a function to calculate scalar product of two vectors by
// overloading ‘ * ’ operator so that the statements like v1 *v2 are permissible. Write a main function
// to test the above class template and find the sclar product of following pairs of vectors {1,2,3} ,
// {4,5,6} & {2.5,3.5,4.5}, {1.5,2.5,3.5}.
#include <iostream>
using namespace std;

template <class T>
class Vector{
    T *arr;
    int size;
public:
    Vector(int size){
        this->size = size;
        arr = new T[size];
    }
    void input(){
        for (int i = 0; i < size; i++){
            cin >> arr[i];
        }
    }
    T operator*(Vector v){
        T sum = 0;
        for (int i = 0; i < size; i++){
            sum += arr[i] * v.arr[i];
        }
        return sum;
    }
};
int main(){
    Vector<int> v1(3), v2(3);
    cout << "Enter 3 integers for vector 1: ";
    v1.input();
    cout << "Enter 3 integers for vector 2: ";
    v2.input();
    cout << "Scalar product: " << v1 * v2 << endl;

    Vector<float> v3(3), v4(3);
    cout << "Enter 3 floats for vector 3: ";
    v3.input();
    cout << "Enter 3 floats for vector 4: ";
    v4.input();
    cout << "Scalar product: " << v3 * v4 << endl;
    return 0;
}