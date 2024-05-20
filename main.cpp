#include <iostream>
using namespace std;

int main() {
	const int SIZE = 5;
	int currentSize = SIZE;
	int arr[SIZE] = { 1, 0, 2, 3, 4 };

	//delete the element by index
	int index;
	for (size_t i = 0; i < SIZE; i++)
	{
		if (arr[i] == 0)
		{
			index = i;
			currentSize--;
			cout << currentSize << endl;
		}
		else
		{
			index = -1;
		}
		for (size_t j = 0; j <= currentSize; j++)
		{
			if (j >= index && index != -1)
			{
				arr[j] = arr[j + 1];
				if (j == currentSize)
				{
					arr[j] = -1;
					i = i - 1;
				}
			}
			else
			{
				arr[j] = arr[j];
			}
		}
	}

	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}