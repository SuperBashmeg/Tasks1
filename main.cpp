#include <iostream>
using namespace std;

bool isNumberPositive(int num) {
	if (num > 0) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (isNumberPositive(num)) {
		cout << "The number is positive." << endl;
	}
	else {
		cout << "The number is not positive." << endl;
	}
}