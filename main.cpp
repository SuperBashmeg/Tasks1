#include <iostream>
using namespace std;

int main() {
	const int SIZE = 12;
	int income[SIZE];
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "Enter income for " << i + 1 << " month: ";
		cin >> income[i];
	}
	int max = income[0], min = income[0];
	for (size_t i = 0; i < SIZE; i++)
	{
		if (income[i] > max) {
			max = income[i];
		}
		if (income[i] < min) {
			min = income[i];
		}
	}
	cout << "Max monthly income: " << max << "; Min monthly income " << min << endl;
	return 0;
}