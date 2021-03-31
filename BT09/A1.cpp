#include <iostream>
#include <cstring>
using namespace std;

char* res;

char* xconcat (const char* s1 , const char* s2 )
{
	int length = strlen(s1) + strlen(s2);
	res = new char[length];
	strcpy(res,s1);
	strcat(res,s2);
	return res;
}

int main()
{
	cout << xconcat("HELLO"," HOW ARE YOU");
}