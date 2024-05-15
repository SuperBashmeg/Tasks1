#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	const int SIZE = 5;
	int sides[SIZE];
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "Enter length for " << i + 1 << " side: ";
		cin >> sides[i];
	}
	for (size_t i = 0; i < SIZE; i++)
	{
		sum += sides[i];
	}
	cout << "Perimeter: " << sum << endl;
	return 0;
}