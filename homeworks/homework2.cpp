//write a program using function template to accept
// two integers and display the sum and average  and also 
//two floating point numbers and their sum and average

#include <iostream>
using namespace std;

template <class T>
void sum(T a, T b){
    cout << "Sum: " << a + b << endl;
    cout << "Average: " << (a + b) / 2 << endl;
}
int main(){
    sum(10, 20);
    sum(10.5, 20.5);
    return 0;
}