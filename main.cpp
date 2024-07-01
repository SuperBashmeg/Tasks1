#include <iostream>
using namespace std;

int main() {
	int start;
	int end;
	int sum = 0;
	cout << "Enter the start of range: ";
	cin >> start;
	cout << "Enter the end of range: ";
	cin >> end;
	for (int i = start + 1; i < end; i++) {
		sum += i;
	}
	cout << "Sum of numbers between " << start << " and " << end << " is " << sum << endl;
	return 0;
}