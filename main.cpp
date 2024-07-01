#include "lib.h"


int main() {
	int a;
	cout << "Enter a number: ";
	cin >> a;
	cout << "All numbers that " << a << " is divided by without a remainder: ";
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}