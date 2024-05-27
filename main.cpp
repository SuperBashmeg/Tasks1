#include <iostream>
using namespace std;

bool IsNumberLucky(int number) {
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 3; i++) {
		sum1 += number % 10;
		number /= 10;
	}
	for (int i = 0; i < 3; i++) {
		sum2 += number % 10;
		number /= 10;
	}
	return sum1 == sum2;
}

int main() {
	int number;
	do
	{
		cout << "Enter a 6 digit number: ";
		cin >> number;
	} while (!(number >= 99999 && number < 1000000));

	if (IsNumberLucky(number))
		cout << "The number is lucky." << endl;
	else
		cout << "The number is not lucky." << endl;
}