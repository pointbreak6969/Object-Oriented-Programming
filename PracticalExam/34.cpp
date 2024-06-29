// WAP to enter two amount of money in terms of rupees and paisa and then add them using binary
// plus (+) operator overloading.

#include <iostream>
using namespace std;

class Sum{
int rupee, paisa;
public:
Sum(){
    rupee = 0;
    paisa = 0;
}
Sum(int a, int b) {
    rupee = a;
    paisa = b;
}
Sum operator + (Sum obj) {
    Sum temp;
    temp.rupee = rupee + obj.rupee;
    temp.paisa = paisa + obj.paisa;
    if (temp.paisa > 100) {
        temp.paisa -= 100;
        temp.rupee++;
    }
    return temp;
};
void display() {
    cout << "Rupees: " << rupee << " Paisa: " << paisa << endl;
}
};
int main() {
    Sum s1(10, 50), s2(20, 70), s3;
    s3 = s1 + s2;
    s3.display();
    return 0;
}