#include <iostream>
#include <ctime>
using namespace std;

void Align(int number) {
	if (number / 10 < 1) {
		cout << "   ";
	}
	else if (number / 100 < 1) {
		cout << "  ";
	}
	else if (number / 1000 < 1) {
		cout << " ";
	}
}

int main() {
	srand(time(0));
	const int rows = 3;
	const int cols = 3;
	long long matrix[rows][cols];
	cout << "Enter a number: ";
	int number;
	cin >> number;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = number * pow(2, i*cols+j);
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			Align(matrix[i][j]);
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < cols*4+9; i++) {
		cout << "-";
	}
	cout << endl;


	return 0;
}