#include "func_numbers.h"

int main() {
	int binarynumber;
	cout << "Enter binary number: ";
	cin >> binarynumber;
	cout << "Decimal number: " << binaryToDecimal(binarynumber) << endl;
	return 0;
}