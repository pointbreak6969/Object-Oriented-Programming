// WAP to input two vector coordinates from a base class named Base. Class Derived inherits all the
// properties of class Base. Class Derived must contain a function named add_vector() that add the
// two vectors input from the base class and finally display the result from a function display() that is
// friend with the base class.

#include <iostream>
using namespace std;

class Base
{
protected:
    int x, y, z, a, b, c, p, q, r;
public: 
void getData(){
cout << "Enter the first vector coordinates: ";
cin >> x >> y >> z;
cout << "Enter the second vector coordinates: ";
cin >> a >> b >> c;
}
friend void display(Base);
};
class Derived : public Base
{
public:
void add_vector(){
    getData();
    p = x + a;
    q = y + b;
    r = z + c;
}
};

void display(Base obj){
    cout << "The resultant vector is: " << obj.p << "i + " << obj.q << "j + " << obj.r << "k" << endl;
}

int main(){
    Derived obj;
    obj.add_vector();
    display(obj);
    return 0;
}