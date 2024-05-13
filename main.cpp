#include <iostream>
using namespace std;

void a(int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (i >= j) {
				cout << "* ";
			}
			else
			{
				cout << "- ";
			}

		}
		cout << endl;
	}
}

void b(int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (i <= j) {
				cout << "* ";
			}
			else
			{
				cout << "- ";
			}

		}
		cout << endl;
	}
}

void c(int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (i + j < size && i <= j) {
				cout << "* ";
			}
			else
			{
				cout << "- ";
			}

		}
		cout << endl;
	}
}

void d(int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (i + j + 1 >= size && i >= j) {
				cout << "* ";
			}
			else
			{
				cout << "- ";
			}

		}
		cout << endl;
	}
}

void e(int size) {
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			if (i + j + 1 >= size && i >= j) {
				cout << "* ";
			}
			else if (i + j < size && i <= j) {
				cout << "* ";
			}
			else
			{
				cout << "- ";
			}

		}
		cout << endl;
	}
}



int main() {
	bool error = true;
	while (error)
	{
		int shape, size;
		cout << "Select shape(from 1 to 5, or select 0 to leave): ";
		cin >> shape;
		if (!(shape >= 0 && shape <= 5)) { cout << "Incorrect shape" << endl; }
		else {
			cout << "Select size(from 1 to infinity (everything tested only on 5)): ";
			cin >> size;
			if (!(size >= 1)) { cout << "Incorrect size" << endl; }
			else
			{
				switch (shape)
				{
				case 0: {
					return 0;
				}break;
				case 1: {
					a(size);
				}break;
				case 2: {
					b(size);
				}break;
				case 3: {
					c(size);
				}break;
				case 4: {
					d(size);
				}break;
				case 5: {
					e(size);
				}break;
				default:
					break;
				}
			}
		}

	}
	return 0;
}