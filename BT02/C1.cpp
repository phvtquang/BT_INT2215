#include <iostream>
#include <math.h>
using namespace std;
int so_nguyen_to(int n)
{
    if (n < 2)
    {
        return 0;
    }
    {
        int i;
        int can_n = sqrt(n);
        for (i = 2; i <= can_n; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int n;
    cin >> n;
    if (so_nguyen_to(n) == 1)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
