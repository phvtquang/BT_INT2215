#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    cout << x << " " << y << " " << z << " ";
    if ((x == y) && (y == z))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
