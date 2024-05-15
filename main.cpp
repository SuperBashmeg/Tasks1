#include <iostream>
using namespace std;

int main() {
	const int SIZE = 6;
	int arr[SIZE];
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << "Enter " << i + 1 << "s number: ";
		cin >> arr[i];
	}
	for (size_t i = SIZE; i > 0; i--)
	{
		cout << arr[i-1] << ' ';
	} cout << endl;
	return 0;
}