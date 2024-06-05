#include "lib.h"

//get if number is positive or negative
void positiveOrNegative(int* num) {
	if (*num > 0) {
		cout << "Positive" << endl;
	}
	else if (*num < 0) {
		cout << "Negative" << endl;
	}
	else {
		cout << "Zero" << endl;
	}
}


int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	int* n_p = &num;
	positiveOrNegative(n_p);
	return 0;
}