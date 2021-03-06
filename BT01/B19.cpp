#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    bool b;
    cout << "nhap ba so" << endl;
    cout << "1 = ";
    cin >> x;
    cout << "2 = ";
    cin >> y;
    cout << "3 = ";
    cin >> z;
    if ((x < y) && (y < z))
    {
        b = true;
        cout << "true";
    }
    else
    {
        b = false;
        cout << "false";
    }
    return 0;
}
