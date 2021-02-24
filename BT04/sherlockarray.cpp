#include <iostream>
using namespace std;

int n, t;
long long a[100001];
long long sum[100001];

void solve(long long a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (sum[i - 1] == sum[n] - a[i] - sum[i - 1]) {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}


int main()
{
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        solve(a, n);
    }
}