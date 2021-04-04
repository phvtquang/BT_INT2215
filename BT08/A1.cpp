#include <iostream>
using namespace std;

void f(int xval)
{
	int x;
	x = xval;
	cout << &x << endl;
}
void g(int yval)
{
	int y;
	cout << &y << endl;
}
int main()
{
	f(7);
	g(11);
	return 0;
}

//A1: 2 biến có địa chỉ giống nhau vì trình biên dịch sắp xếp x và y trên cùng 1 địa chỉ