#include <iostream>
using namespace std;

struct Point
{
    int x,y;    
    
};

int main()
{
    Point dot = { 5 , 6};
    cout << &dot.x << ' ' << &dot.y << endl;
    // kq in ra la 0x61fe18 0x61fe1c 
    // => lien tiep nhau
}