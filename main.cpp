#include <iostream>
using namespace std;

void GetPerfectNumbers(int start, int end) {
	bool isPerfect = false;
	for (int i = start; i <= end; i++) {
		int sumOfDivisors = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sumOfDivisors += j;
			}
		}
		if (sumOfDivisors == i) {
			if (!isPerfect) {
				cout << "Perfect Numbers: ";
			}
			else
			{
				cout << "; ";
			}
			cout << i;
			isPerfect = true;
		}
	}
	if (!isPerfect) {
		cout << "There are no perfect numbers in the range.";
	}
	else
	{
		cout << endl;
	}
}

int main() {
	int start, end;
	cout << "Enter the start of the range: ";
	cin >> start;
	cout << "Enter the end of the range: ";
	cin >> end;
	GetPerfectNumbers(start, end);
	return 0;
}