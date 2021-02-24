#include <iostream>
#include <string>
using namespace std;

string a[100];
int n;
string s1;

string revs(string s)
{
	string s1 = "";
	for (int i = 0; i < s.size(); i++)
	{
		s1 = s[i] + s1;
	}
	return s1;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n ; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		s1 = revs(a[i]);
		for (int j = 0; j < n; j++)
		{
			if (s1 == a[j] && i != j)
			{
				cout << s1.size() << ' ' << s1[s1.size() / 2];
				return 0;
			}
		}
	}
}
