#include <iostream>
using namespace std;

struct Point
{
    int x,y;    
    
};

void print(Point dot)
    {
        cout << "( " << dot.x << ',' << dot.y << " )" << endl;
    }

int main()
{
    Point dot = { 5 , 6};
    print(dot);
}