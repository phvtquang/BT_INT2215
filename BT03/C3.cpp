#include <iostream>
#include <string>
using namespace std;

bool checkdoiguong(int x)
{
    string s = to_string(x);
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]!=s[s.length()-i-1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n,a,b,res;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        cin >> a >> b;
        res = 0;
        for (int j=a; j<=b; j++)
        {
            if (checkdoiguong(j))
            {
                res++;
            }
        }
        cout << res << endl;
    }
}