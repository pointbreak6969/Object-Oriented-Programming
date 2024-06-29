//wap to enter two amount of money in terms of rupees and paisa and then add them using binary plus(+) operator overloading

#include<iostream>
using namespace std;

class Sum{
    int rupee, paisa;
    public:
    Sum(int r, int p){
        rupee = r;
        paisa = p;
    }
    Sum(){
        rupee = 0;
        paisa = 0;
    }
    Sum operator+(Sum s){
        Sum temp;
        temp.rupee = rupee + s.rupee;
        temp.paisa = paisa  + s.paisa;
        if (temp.paisa >= 100){
            temp.rupee++;
            temp.paisa -=100;
        }
        return temp;
    }
    void display(){
        cout << "Rupee:" << rupee << endl;
        cout << "Paisa" << paisa << endl; 
    }
};

int main(){
    Sum s(5, 60), s1(4, 80), s3;
    s3  = s + s1;
    s3.display();
    return 0;
}