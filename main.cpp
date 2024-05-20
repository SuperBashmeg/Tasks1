#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 40;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter the population of the " << i + 1 << " flat: ";
		cin >> arr[i];
	}
	int flat;
	cout << "Enter the number of the flat: ";
	cin >> flat;
	int population = arr[flat - 1];
	if (flat % 2 == 1) {
		population += arr[flat];
	}
	else
	{
		population += arr[flat - 2];
	}
	cout << "The population of the same floor is " << population << endl;

	int enterence;
	cout << "Enter the number of the enterence: ";
	cin >> enterence;
	int enterencePopulation = 0;
	for (int i = (enterence - 1) * 10; i < (enterence - 1) * 10 + 10; i++) {
		enterencePopulation += arr[i];
	}
	cout << "The population of the same enterence is " << enterencePopulation << endl;

	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr[i] >= 5) {
			cout << "The number of the flat with more than 5 people is " << i + 1 << endl;
		}
	}

	return 0;
}
