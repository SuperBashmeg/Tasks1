#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	const int SIZE = 6;
	int income[SIZE];
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "Enter income for " << i + 1 << " month: ";
		cin >> income[i];
	}
	for (size_t i = 0; i < SIZE; i++)
	{
		sum += income[i];
	}
	cout << "Total income: " << sum << endl;
	return 0;
}