#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "nhap n";
    cin >> n;
    for (int i = n; i >= 0; i--)
    {
        for (int k = 0; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
