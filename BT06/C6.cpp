#include <iostream>
using namespace std;

void indl();
void baktrak(int i);

int n;
int t[1000];
bool check[1000] = { false };

int main()
{
	cin >> n;
	baktrak(1);
}

void indl() {
	for (int i = 1; i <= n; ++i)
	{
		cout << t[i] << ' ';
	}
	cout << endl;
}

void baktrak(int k) {
	for (int i = 1; i <= n; i++)
	{
		if (check[i] == false) {
			t[k] = i;
			check[i] = true;
			if (k == n) {
				indl();
			}
			else
			{
				baktrak(k + 1);
			}
			check[i] = false;
		}
	}
}

