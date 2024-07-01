#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	double average = 0;
	for (int i = 1; i <= 1000; i++) {
		sum += i;
	}
	average = sum / 1000.0;
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
}