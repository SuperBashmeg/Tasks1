#include "lib.h"

bool hasTwoSameDigits(int num) {
	int a = num / 100;
	int b = (num / 10) % 10;
	int c = num % 10;
	if (a == b && b != c || a == c && b != c || b == c && a != c) {
		return true;
	}
	return false;
}


int main() {
	int count = 0;
	for (int i = 100; i < 1000; i++) {
		if (hasTwoSameDigits(i)) {
			count++;
		}
	}
	cout << "Count: " << count << endl;
}