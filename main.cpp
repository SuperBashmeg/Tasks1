#include <iostream>
using namespace std;

bool isNumberPrime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (isNumberPrime(num)) {
		cout << num << " is a prime number." << endl;
	}
	else {
		cout << num << " is not a prime number." << endl;
	}
	return 0;
}