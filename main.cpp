#define _CRT_SECURE_NO_WARNINGS
#include "lib.h"


int countChar(char* str, char charToFind) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == charToFind) {
			count++;
		}
	}
	return count;
}

int main() {
	const int SIZE = 100;
	char str[SIZE];
	cout << "Enter the string: ";
	cin.getline(str, SIZE);
	char charToFind;
	cout << "Enter the character to find: ";
	cin >> charToFind;
	cout << "The number of occurrences of the character " << charToFind << " in the string is: " << countChar(str, charToFind) << endl;

	
	return 0;
}