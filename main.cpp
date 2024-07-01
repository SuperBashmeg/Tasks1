#include "lib.h"

int removeDigits(int number) {
	int result = 0;
	int multiplier = 1;
	while (number != 0) {
		int digit = number % 10;
		if (digit != 3 && digit != 6) {
			result += digit * multiplier;
			multiplier *= 10;
		}
		number /= 10;
	}
	return result;
}

int main() {
	int number;
	cout << "Enter number: ";
	cin >> number;
	cout << "Result: " << removeDigits(number) << endl;

	return 0;
}