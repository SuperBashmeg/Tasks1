#define _CRT_SECURE_NO_WARNINGS
#include "lib.h"

void deleteChar(char* str, int index) {
	int i = 0;
	while (str[i] != '\0') {
		if (i == index) {
			while (str[i] != '\0') {
				str[i] = str[i + 1];
				i++;
			}
			break;
		}
		i++;
	}
	cout << "String after deletion: " << str << endl;
}

int main() {
	const int SIZE = 100;
	char str[SIZE] = "Just some random string";
	int indexToDelete;
	cout << "Original string: " << str << endl;
	cout << "Enter index to delete: ";
	cin >> indexToDelete;
	deleteChar(str, indexToDelete);
	return 0;
}