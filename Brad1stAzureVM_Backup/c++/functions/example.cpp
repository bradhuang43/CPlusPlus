// function example

#include <iostream>
using namespace std;

int addition (int a, int b)
{
	int r;
	r = a + b;
	return (r);
}

int subtraction (int a, int b)
{
	int r;
	r = a - b;
	return (r);
}

int main ()
{
	int x = 5, y = 3, z;
	z = addition (3, 5);
	cout << "The first result is " << z << '\n';
	z = subtraction (7, 2);
	cout << "The second result is " << z << '\n';
	cout << "The third result is " << subtraction (7, 2) << '\n';
	cout << "The fourth result is " << subtraction (x, y) << '\n';
	z = 4 + subtraction (x, y);
	cout << "The fifth result is " << z << '\n';
	return 0;
}
