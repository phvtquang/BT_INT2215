#include <iostream>
using namespace std;

struct Point
{
    int x,y;    
    
};

void print1(Point dot)
    {
        cout << "( " << &dot.x << ',' << &dot.y << " )" << endl;
    }

void print2(Point &dot)
    {
        cout << "( " << &dot.x << ',' << &dot.y << " )" << endl;
    }

int main()
{
    Point dot = { 5, 6};
    print1(dot);
    print2(dot);
}