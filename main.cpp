#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}