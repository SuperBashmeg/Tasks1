#include <iostream>
using namespace std;

int GetSumOfNumbersBetween(int start, int end) {
	int sum = 0;
	for (int i = start+1; i < end; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	int start, end;
	cout << "Enter start: ";
	cin >> start;
	cout << "Enter end: ";
	cin >> end;
	cout << "Sum of numbers between " << start << " and " << end << " is " << GetSumOfNumbersBetween(start, end) << endl;
	return 0;
}