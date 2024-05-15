#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << i << "-" << arr[i] << " ; ";
	} cout << endl;
	

}

int main() {
	const int SIZE = 12;
	int numbers[SIZE];
	srand(time(0));
	for (size_t i = 0; i < SIZE; i++)
	{
		numbers[i] = rand() % 2000 - 1000;
	}
	printArray(numbers, SIZE);
	int max = numbers[0], min = numbers[0];
	for (size_t i = 0; i < SIZE; i++)
	{
		if (numbers[i] > max) {
			max = numbers[i];
		}
		if (numbers[i] < min) {
			min = numbers[i];
		}
	}
	cout << "Max number: " << max << "; Min number " << min << endl;
	return 0;
}