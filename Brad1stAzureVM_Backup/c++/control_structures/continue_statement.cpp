// continue loop example

#include <iostream>
using namespace std;

int main()
{
	int n = 10;
	for ( ; n > 0; n--) {
		if (n == 5) continue;
		cout << n << ", ";
	}
	cout << "FIRE!\n";
}
