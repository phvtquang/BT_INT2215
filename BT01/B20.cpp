#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "nhap hai so" << endl;
    cout << "1 = ";
    cin >> x;
    cout << "2 = ";
    cin >> y;
    if ((x % 7 == 0) && (y % 7 == 0))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
