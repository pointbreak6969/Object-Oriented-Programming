// wap to input "X" and "Y" coordinate and move 4 units from both X and Y direction by overloading unary ++ operator in postfix notation and prefix notation

#include <iostream>
using namespace std;

class Increament{
    private: 
    int num1, num2;
    public:
    Increament(int x, int y){
        num1 = x;
        num2 = y;
    }
    Increament(){
        num1 = 0;
        num2 = 0;
    }
    Increament operator++(int){
        Increament temp;
        temp.num1  = ++num1;
        temp.num1  = ++num1;
        temp.num1  = ++num1;
        temp.num1  = ++num1;
        temp.num2 = num2++;
        temp.num2 = num2++;
        temp.num2 = num2++;
        temp.num2 = num2++;
        temp.num2 = num2++;
        return temp;        
    }
   
    void display(){
        cout << "The value after increament of x is" << num1 << num2; 
    }
};

int main(){
    Increament i1(10, 20), i2;
    i2 = i1++;
    i2.display();
    return 0;
}

