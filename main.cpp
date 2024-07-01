#include "lib.h"


int main() {
	int A;
	cout << "Enter A: ";
	cin >> A;
	cout << "Result: ";
	for (int B = 1; B < A; B++) {
		if (A % (B * B) == 0 && A % (B * B * B) != 0) {
			cout << B << " ";
		}
	}
	cout << endl;

	return 0;
}