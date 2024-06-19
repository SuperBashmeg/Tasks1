#define _CRT_SECURE_NO_WARNINGS
#include "lib.h"

int main() {
	const int SIZE = 100;
	char str[SIZE] = "Alala";
	_strlwr(str);
	int realsize = strlen(str);
	int i = 0;
	for (i = 0; i < realsize; i++) {
		if (str[i] != str[realsize - i - 1]) {
			cout << "The word is not Palindrome" << endl;
			break;
		}
	}
	if (i == realsize) {
		cout << "The word is Palindrome" << endl;
	}
	return 0;
}