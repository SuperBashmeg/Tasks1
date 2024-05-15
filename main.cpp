#include <iostream>
using namespace std;

int main() {
	const int SIZE = 12;
	int firstMonth, lastMonth;
	int income[SIZE];
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "Enter income for " << i + 1 << " month: ";
		cin >> income[i];
	}
	do
	{
		cout << "Enter range (firstMonth lastMonth): ";
		cin >> firstMonth >> lastMonth;
		firstMonth -= 1;
		lastMonth -= 1;
	} while (!(firstMonth >= 0 && firstMonth < SIZE && lastMonth >= 0 && lastMonth < SIZE));

	if (firstMonth > lastMonth) {
		int temp = firstMonth;
		firstMonth = lastMonth;
		lastMonth = temp;
	}

	int sum = 0;
	for (size_t i = firstMonth; i <= lastMonth; i++)
	{
		sum += income[i];
	}
	cout << "Total sum of range from " << firstMonth + 1 << " to " << lastMonth + 1 << " is equal to " << sum << endl;
	return 0;
}