#include "lib.h"

void aos(int n) { //amount of stars
	if (n == 0) {
		return;
	}
	else {
		cout << "*";
		aos(n - 1);
	}
}

int main() {
	int n;
	cout << "Enter amount of stars: ";
	cin >> n;
	aos(n);
	return 0;
}