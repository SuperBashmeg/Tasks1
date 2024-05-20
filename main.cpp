#include <iostream>
using namespace std;

int main() {
	const int SIZE = 10;
	int currentSize = SIZE;
	int arr[SIZE/2];
	int arr2[SIZE/2];
	int globalArray[SIZE] = { 1, 0, 2, 3, 4, -3, 8, -1, 2, 0 };

	for (size_t i = 0; i < SIZE; i++)
	{
		if (i < 5)
		{
			arr[i] = globalArray[i];
		}
		else
		{
			arr2[i - 5] = globalArray[i];
		}
	}
	
	for (size_t i = 0; i < SIZE; i++)
	{
		if (i < 5)
		{
			if (i == 0) { cout << "First array: "; }
			cout << arr[i] << " ";
			if (i == 4) { cout << endl; }
		}
		else
		{
			if (i == 5) { cout << "Second array: "; }
			cout << arr2[i - 5] << " ";
			if (i == 9) { cout << endl; }
		}
	}
	
	return 0;
}