//program to demostrate subclass constructor
#include <iostream>
using namespace std;

class First
{
    int a;

public:
    First()
    {
        a = 0;
    }
    void setData(int x)
    {
        a = x;
    }
    void calculate()
    {
        a = a * 100;
        cout << "The first value is" << a << endl;
    }
};

class Second
{
    int b;

public:
    First f;
    Second()
    {
        b = 0;
    }
    void getData(int y)
    {
        b = y;
        cout << "The second value is" << b << endl;
    }
};

class Third{
    int c;
    public:
    Second se;
    Third()
    {
        c = 0;
    }
    void getData2(int z){
        c =z;
        cout<< "the third value is" << c <<endl;
    }
};

main(){
    Third th;
    th.getData2(100);
    th.se.getData(200);
    th.se.f.setData(300);
    th.se.f.calculate();
}