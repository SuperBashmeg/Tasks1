#define _CRT_SECURE_NO_WARNINGS
#include "lib.h"

void deleteChar(char* str, char charToDelete) {
	int i = 0, j = 0;
	while (str[i]) {
		if (str[i] != charToDelete) {
			str[j] = str[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
}

int main() {
	const int SIZE = 100;
	char str[SIZE] = "Just some random string";
	char charToDelete;
	cout << "Original string: " << str << endl;
	cout << "Enter the character you want to delete: ";
	cin >> charToDelete;
	deleteChar(str, charToDelete);
	cout << "String after deleting the character: " << str << endl;
	return 0;
}