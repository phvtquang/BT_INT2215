#include <iostream>
using namespace std;
void UCLN(int a, int b, int i)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    i = a;
}
void BCNN(int a, int b, int i, int f)
{
    f = (a * b) / i;
}
int main()
{
    int a, b, f, i;
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    UCLN(a, b, i);
    BCNN(a, b, i, f);
    cout << f;
}
