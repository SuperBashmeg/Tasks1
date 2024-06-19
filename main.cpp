#define _CRT_SECURE_NO_WARNINGS
#include "lib.h"

int main() {
	const int SIZE = 100;
	char str[SIZE];
	cout << "Enter a string: ";
	cin.getline(str, SIZE);
	int i = 0;
	int digits = 0;
	int letters = 0;
	int other = 0;

	while (str[i] != '\0') {
		if (isdigit(str[i])) {
			digits++;
		}
		else if (isalpha(str[i])) {
			letters++;
		}
		else {
			other++;
		}
		i++;
	}
	cout << "Digits: " << digits << endl;
	cout << "Letters: " << letters << endl;
	cout << "Other: " << other << endl;
	return 0;
}