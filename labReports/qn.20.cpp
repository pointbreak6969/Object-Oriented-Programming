// wap to overload less than relational operator (<)
#include <iostream>
using namespace std;

class Relational
{
    int x, y;

public:
    Relational(int x, int y)
    {
        this->x = x;
        this->y = y;
        
    }
    Relational()
    {
        x = 0;
        y = 0;
    }
    Relational operator<(Relational r)
    {
        Relational temp;
        if (x < r.x && y < r.y)
        {
            temp.x = 1;
            temp.y = 1;
        }
        else
        {
            temp.x = 0;
            temp.y = 0;
        }
        return temp;
    };
    void display()
    {
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
    }
};

int main()
{
    Relational  r1(10, 20), r2(5, 10), r3;
    r3 = r1 < r2;
    r3.display();
    return 0;
}