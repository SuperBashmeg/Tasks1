#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter a number: ";
	cin >> a;
	int mult = 1;
	for (size_t i = a; i < 20; i++)
	{
		mult *= i;
	}
	cout << "The multiplication of the numbers from " << a << " to 20 is: " << mult << endl;
}