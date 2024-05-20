#include <iostream>
using namespace std;


bool isExist(int arr[], int size, int number)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == number)
		{
			return true;
		}
	}
	return false;
}


int main()
{
	const int SIZE = 10;
	int numbers[SIZE];
	int displays[SIZE];
	int displaysPosition = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> numbers[i];
	}

	cout << "Numbers that are exist in array more than once: ";
	for (int i = 0; i < SIZE; i++)
	{
		int count = 0;
		for (int j = 0; j < SIZE; j++)
		{
			if (numbers[i] == numbers[j] && !isExist(displays, SIZE, numbers[i]))
			{
				count++;
			}
		}
		if (count > 1)
		{
			cout << numbers[i] << " ";
			displays[displaysPosition] = numbers[i];
			displaysPosition++;
		}
	}
	cout << endl;


	return 0;
}
