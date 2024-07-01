#include <iostream>
using namespace std;

int main() {
	int num;
	int sum = 0;

	do
	{
		cout << "Enter a number: ";
		cin >> num;
		sum += num;
	} while (num != 0);
	cout << "The sum is: " << sum << endl;
	return 0;
}