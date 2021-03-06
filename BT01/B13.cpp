#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, y;
    double z;
    cout << "nhap toa do" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    z = (x * x) + (y * y);
    z = sqrt(z);
    cout << z;
    return 0;
}
