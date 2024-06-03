#include "lib.h"

int gcd(int a, int b) { //recursive greatest common divisor
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << "Greates Common Divisor of " << a << " and " << b << " is " << gcd(a, b) << endl;
	return 0;
}