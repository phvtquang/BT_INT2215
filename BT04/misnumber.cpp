#include <iostream>
using namespace std;

int a[1000];
int b[1000];
int n;
int main()
{
	int n;
	cin >> n; 
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n + 1; i++)
	{
		cin >> b[i];
	}
	bool xuathien = false;
	for (int i = 1; i <= n+1; i++) {
		xuathien = false;
		for (int j = 1; j <= n; j++)
		{
			if (b[i] == a[j]) {
				xuathien = true;
				break;
			}
		}
		if (!xuathien) {
			cout << b[i];
			return 0;
		}

	}
}