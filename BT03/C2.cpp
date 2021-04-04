#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string s;
    cin >> s;
    cout << s.length() << endl;
    for (int i=0; i<s.length(); i++)
    {
        if (s[i]!=s[s.length()-i-1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}