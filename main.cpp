#define _CRT_SECURE_NO_WARNINGS
#include "lib.h"

void replace(char* str) {
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '.') {
			str[i] = '!';
		}
	}
}

int main() {
	const int SIZE = 100;
	char str[SIZE];
	cout << "Enter the string: ";
	cin.getline(str, SIZE);
	replace(str);
	cout << "String after replacment the characters: " << str << endl;
	
	return 0;
}