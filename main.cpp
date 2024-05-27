#include <iostream>
using namespace std;

int GetNumber(int base, int power) {
	return pow(base, power);
}

int main() {
	int base, power;
	cout << "Enter the base: ";
	cin >> base;
	cout << "Enter the power: ";
	cin >> power;
	cout << "The result is: " << GetNumber(base, power) << endl;
	return 0;
}