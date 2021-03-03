#include <iostream>
using namespace std;

void count_even(int* A, int n)
{
	for (int i = 0; i < n; i++) {
		if (A[i] % 2 == 0)
		{
			cout << A[i] << ' ';
		}
	}
}

int A[1000];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	count_even(A, n);
}