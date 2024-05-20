#include <iostream>
using namespace std;

int main() {
	const int SIZE = 5;
	int currentSize = SIZE;
	int arr[SIZE] = { 1, 0, 2, 3, 4 };
	int arr2[SIZE] = { -3, 8, -1, 2, 0 };
	int globalArray[SIZE * 2];
	int globalCurrentSize = 0;

	int index;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr[i] > 0)
		{
			globalArray[globalCurrentSize] = arr[i];
			globalCurrentSize++;
		}
	}
	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr2[i] > 0)
		{
			globalArray[globalCurrentSize] = arr2[i];
			globalCurrentSize++;
		}
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr[i] == 0)
		{
			globalArray[globalCurrentSize] = arr[i];
			globalCurrentSize++;
		}
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr2[i] == 0)
		{
			globalArray[globalCurrentSize] = arr2[i];
			globalCurrentSize++;
		}
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0)
		{
			globalArray[globalCurrentSize] = arr[i];
			globalCurrentSize++;
		}
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr2[i] < 0)
		{
			globalArray[globalCurrentSize] = arr2[i];
			globalCurrentSize++;
		}
	}

	for (size_t i = 0; i < SIZE*2; i++)
	{
		cout << globalArray[i] << " ";
	}
	
	return 0;
}