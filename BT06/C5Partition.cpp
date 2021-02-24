#include <iostream>
using namespace std;

void baktrak(int a, int i);
void indl(int i);

int t[1000];
int a, s;

int main()
{
	s = 0;
	t[0] = 1;
	cin >> a;
	baktrak(a, 1);
}


void indl(int i)
{
	for (int j = 1; j <= i - 1; j++)
	{
		cout << t[j] << ' ';
	}
	cout << t[i] << endl;
}

void baktrak(int a, int i) {
	if (s <= a) {
		for (int j = t[i - 1]; j <= a; j++) {
			s += j;
			t[i] = j;
			if (s == a)
			{
				indl(i);
			}
			else
			{
				baktrak(a, i + 1);
			}
			s -= j;
		}
	}
}



