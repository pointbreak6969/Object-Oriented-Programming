// WAP to overload less than relational operator (<).
#include <iostream>
using namespace std;
class Relational {
int x;
public:
Relational(){
     x = 0;
}
Relational(int a){
    x = a;
}
Relational operator < (Relational obj){
    Relational temp;
    if (x < obj.x) {
        temp.x = 0;
    } else {
        temp.x = 1;
    }
    return temp;
}
void display(){
    if (x == 0) {
        cout << "First one is smaller" << endl;
    }
    else {
        cout << "Second one is smaller" << endl;
    }
}
};
int main(){
    Relational r1(10), r2(5), r3;
    r3 = r1 < r2;
    r3.display();
    return 0;
}
