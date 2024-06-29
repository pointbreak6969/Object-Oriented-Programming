// WAP to overload assignment operator (=+).

#include <iostream>
using namespace std;

class Assignment {
    int x;
    public:
    Assignment(){
        x = 0;
    }
    Assignment(int a){
        x = a;
    }
    void operator += (Assignment obj){
        x = x + obj.x;
    }
    void display(){
        cout << "The value after addition is" <<endl;
        cout << x;
    }
};
int main(){
    Assignment obj1(5);
    Assignment obj2(6);
    obj1 += obj2;
    obj1.display();
    return 0;
}