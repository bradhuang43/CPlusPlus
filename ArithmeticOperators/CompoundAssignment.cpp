// compound assignment operators

#include <iostream>
using namespace std;

int main ()
{
	int a, b;
	string prompt = "Please enter two numbers a and b: ";

	cout << prompt << endl;
	cin >> a;
	cin >> b;
	a += b;
	cout << "After Compound Assignment: a+=b, a="<< a << endl;

	return 0;
}