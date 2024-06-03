#include "lib.h"

int sonbanb(int a, int b, int currentsum) { //Sum of numbers between a and b
	if (a == b) {
		return currentsum+a;
	}
	else {
		currentsum += a;
		sonbanb(a + 1, b, currentsum);
	}
}

int main() {
	//enter a and b
	int a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Sum of numbers between a and b: " << sonbanb(a, b, 0) << endl;
	return 0;
}