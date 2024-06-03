#include "lib.h"

int pon(int number, int power, int result) { // Power of number
	if (power == 0) {
		return result;
	}
	else {
		result = result * number;
		return pon(number, power - 1, result);
	}
}

int main() {
	int number;
	cout << "Enter number: ";
	cin >> number;
	int power;
	cout << "Enter power: ";
	cin >> power;
	int answer = pon(number, power, 1);
	cout << "Answer: " << answer << endl;
	return 0;
}