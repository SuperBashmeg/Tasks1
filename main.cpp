#include <iostream>
using namespace std;

int main() {
	int start;
	cout << "Enter a start of range: ";
	cin >> start;
	int end;
	cout << "Enter an end of range: ";
	cin >> end;
	if (end < start) {
		int temp = start;
		start = end;
		end = temp;
	}
	int sum = 0;
	for (size_t i = start+1; i < end; i++)
	{
		sum += i;
	}
	cout << "Sum of numbers between " << start << " and " << end << " is " << sum << endl;
	return 0;
}