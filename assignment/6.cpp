#include <iostream>
using namespace std;

class Increament {
    int number;
    public: 
    Increament(int i) : number(i) {};
    void operator++(){
        ++number;
    };
    void display(){
        cout << number << endl;
    }  
};

int main(){
    Increament obj(20);
    ++obj;
    obj.display();
    return 0;
}
