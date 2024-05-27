#include <iostream>
using namespace std;

int GetBiggetNumber(int num1, int num2) {
	if (num1 > num2) {
		return num1;
	}
	else {
		return num2;
	}
}

int main() {
	int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	cout << "The bigger number is: " << GetBiggetNumber(num1, num2) << endl;

	return 0;
}