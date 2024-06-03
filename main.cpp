#include "lib.h"

int sonbanb(int a, int b) { //Sum of numbers between a and b
	if (a == b) {
		return a;
	}
	else {
		return a + sonbanb(a + 1, b);
	}
}

int main() {
	//enter a and b
	int a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Sum of numbers between a and b: " << sonbanb(a, b) << endl;
	return 0;
}