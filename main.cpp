#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 31;
	double temp[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter the temperature for day " << i + 1 << ": ";
		cin >> temp[i];
	}

	double sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += temp[i];
	}
	cout << "The avarage temperature for jenuary is: " << sum / SIZE << endl;

	double mark;
	cout << "Enter the temperature mark: ";
	cin >> mark;

	cout << "The days with temperature less than " << mark << " are: ";
	for (int i = 0; i < SIZE; i++)
	{
		if (temp[i] < mark)
		{
			cout << i + 1 << " ";
		}
	}


	return 0;
}
