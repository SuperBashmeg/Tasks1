#include "lib.h"


int main() {
	int a;
	cout << "Enter a number: ";
	cin >> a;
	if (a == 0) {
		cout << "The cube of the sum of the digits of this number is equal to " << a * a << endl;
	}
	else {
		int sum = 0;
		int temp = a;
		while (temp != 0) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum * sum * sum == a * a) {
			cout << "The cube of the sum of the digits of this number is equal to " << a * a << endl;
		}
		else {
			cout << "The cube of the sum of the digits of this number is not equal to " << a * a << endl;
		}
	}
	return 0;
}