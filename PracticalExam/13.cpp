// Can you have more than one constructor in a program? WAP to find area of a triangle (when its
// sides are given) using the concept of overloaded constructor.

//Answer: Answer: Yes, a class can have more than one constructor. This is called constructor overloading. We can overload a constructor by passing different numbers of arguments or different same number of arguments with different datatype.


#include <iostream>
using namespace std;

class Area {
    private: 
    int l,b;
    public:
    Area(){
        l = 10;
        b=20;
    };
    Area(int length, int breadth){
        this->l = length;
        this->b = breadth;
    }
   void result(){
    int calculated = (l*b)/2;
    cout<<"The calculated area is " << calculated;
    }
};

int main(){
Area obj1, obj(5,6);
obj1.result();
obj.result();
return 0;
}
