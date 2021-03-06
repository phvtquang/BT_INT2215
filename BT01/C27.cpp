#include <iostream>
using namespace std;
int main()
{
    int n;
    double s;
    int a[50];
    cout << "nhap N";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " = ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    s = s / n;
    cout << s << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "Min =" << a[0] << endl;
    cout << "Max =" << a[n - 1];
    return 0;
}
