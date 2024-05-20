#include <iostream>
using namespace std;

int main() {
	const int SIZE = 10;
	int currentSize = SIZE;
	int arr[SIZE] = { 1, 0, 2, 3, 4, 12, 15, -20, 16, 199 };
	int arr2[SIZE] = { -3, 8, -1, 2, 0, 2, 3, 4, 13, 11, };
	int globalArray[SIZE * 2];
	int globalCurrentSize = 0;
	for (size_t i = 0; i < SIZE*2; i++)
	{
		if (i%2 == 0)
		{
			globalArray[i] = arr[i/2];
		}
		else{
			globalArray[i] = arr2[i/2];
		}
	}
	cout << "Type 1: ";
	for (size_t i = 0; i < SIZE*2; i++)
	{
		cout << globalArray[i] << " ";
	}
	cout << endl;
	int globalArray2[SIZE * 2] = {};
	for (size_t i = 0; i < SIZE * 2; i++)
	{
		if (i < SIZE)
		{
			globalArray2[i] = arr[i];
		}
		else {
			globalArray2[i] = arr2[i - SIZE];
		}
	}
	cout << "Type 2: ";
	for (size_t i = 0; i < SIZE * 2; i++)
	{
		cout << globalArray2[i] << " ";
	}
	cout << endl;
	
	return 0;
}