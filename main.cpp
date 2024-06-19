#include "lib.h"

int main() {
	const int SIZE = 100;
	char str[SIZE] = "Hello, World !";
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == ' ') {
			str[i] = '\t';
		}
		i++;
	}
	cout << str << endl;
	return 0;
}