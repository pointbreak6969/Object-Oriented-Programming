// WAP to overload equality operator (==).
#include <iostream>
using namespace std;

class Equality {
    string word;
    int x;
    public:
    Equality(){
        word = "";
    }
    Equality ( string w) {
        word = w;
    }
    Equality operator ==(Equality& w) {
        Equality temp;
        if (word == w.word) {
            temp.x = 1;
        } else {
            temp.x = 0;
        }
        return temp;
    }
    void display(){
        if (x == 0) {
            cout << "They are not same" << endl;
        } else {
            cout << "They are same" << endl;
        }
    }
};
int main(){
    Equality e1("Hello"), e2("Hello"), e3;
    e3 = (e1 == e2);
    e3.display();
    return 0;
}