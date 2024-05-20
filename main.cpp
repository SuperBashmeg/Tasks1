#include <iostream>
using namespace std;

int main() {
	const int SIZE = 5;
	int currentSize = SIZE;
	int arr[SIZE] = { 1, 0, 2, 3, 4 };
	int arr2[SIZE] = { -3, 8, -1, 2, 0 };
	int globalArray[SIZE];
	int globalCurrentSize = 0;

	for (size_t i = 0; i < SIZE; i++)
	{
		globalArray[i] = arr[i] + arr2[i];
	}
	
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << globalArray[i] << " ";
	}
	
	return 0;
}