#define _CRT_SECURE_NO_WARNINGS
#include "lib.h"

void insertChar(char* str, char charToAdd, int indexToInsert) {
	int i = strlen(str);
	while (i >= indexToInsert) {
		str[i + 1] = str[i];
		i--;
	}
	str[indexToInsert] = charToAdd;
}

int main() {
	const int SIZE = 100;
	char str[SIZE] = "Just some random string";
	char charToAdd;
	int indexToInsert;
	cout << "Original string: " << str << endl;
	cout << "Enter the character to add: ";
	cin >> charToAdd;
	cout << "Enter the index to insert the character: ";
	cin >> indexToInsert;
	insertChar(str, charToAdd, indexToInsert);
	cout << "String after inserting the character: " << str << endl;
	
	return 0;
}