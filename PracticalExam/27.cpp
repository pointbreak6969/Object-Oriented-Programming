// WAP to overload decrement operator (--) in postfix notation.


#include <iostream>
using namespace std;

class Decreament {
    int x;
    public:
    
    Decreament(int a){
        x = a;
    }

    void operator --(int){
        x = x-1;
    }
    void display(){
        cout << "The value after decreament is" <<endl;
        cout << x;
    }
};

int main(){
    Decreament obj(5);
    obj--;
    obj.display();
    return 0;
}