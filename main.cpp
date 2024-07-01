#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter a number: ";
	cin >> a;
	int sum = 0;
	for (size_t i = a; i < 500; i++)
	{
		sum += i;
	}
	cout << "Sum of numbers from " << a << " to 500 is: " << sum << endl;
}