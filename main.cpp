#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 10;
	double cars[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter the price of car " << i + 1 << ": ";
		cin >> cars[i];
	}

	double max = cars[0];
	int maxIndex = 0;
	int maxIndex2 = -1;
	for (int i = 1; i < SIZE; i++)
	{
		if (cars[i] > max)
		{
			max = cars[i];
			maxIndex = i;
		}
		else if (cars[i] == max)
		{
			maxIndex2 = i;
		}
	}
	cout << "The most expensive car is car " << maxIndex + 1 << " with the price of " << max << endl;
	if (maxIndex2 != -1)
	{
		cout << "The last most expensive car is car " << maxIndex2 + 1 << " with the price of " << max << endl;
	}


	return 0;
}
