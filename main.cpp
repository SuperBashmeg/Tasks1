#define _CRT_SECURE_NO_WARNINGS
#include "lib.h"

int main() {
	const int SIZE = 100;
	char str[SIZE] = "Hello, World! 123OMG idk If    Its \t working";
	int i = 0;
	int words = 0;

	while (str[i] != '\0') {
		if (isalpha(str[i]) && i == 0) {
			words++;
		}
		else if (isalpha(str[i]) && !isalpha(str[i - 1])) {
			words++;
		}
		i++;
	}
	cout << str << "\t\t" << "Number of words: " << words << endl;
	return 0;
}