#include "lib.h"


int main() {
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	cout << "All numbers that both entered numbers are divided without a remainder: ";
	for (int i = 1; i <= a && i <= b; i++) {
		if (a % i == 0 && b % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}