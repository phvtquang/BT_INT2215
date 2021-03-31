#include <iostream>
using namespace std;

struct Point
{
    int x,y;    
    
};

void mid_point(const Point dot1,const Point dot2){
    cout << "( " << (dot1.x+dot2.x)/2 << " , " << (dot1.y+dot2.y)/2 << " ) " << endl;
}

int main()
{
    Point dot1 = { 5 , 6};
    Point dot2 = { 15 , 20};
    mid_point(dot1,dot2);     
}