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
	const int rows = 5;
	const int cols = 2;
	int matrix[rows][cols];
	int rowsSum[rows];
	int colsSum[cols];
	int globalSum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % 25;
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < rows; i++) {
		rowsSum[i] = 0;
		for (int j = 0; j < cols; j++) {
			rowsSum[i] += matrix[i][j];
			globalSum += matrix[i][j];
		}
	}

	for (int i = 0; i < cols; i++) {
		colsSum[i] = 0;
		for (int j = 0; j < rows; j++) {
			colsSum[i] += matrix[j][i];
			globalSum += matrix[j][i];
		}
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			Align(matrix[i][j]);
			cout << matrix[i][j];
		}
		cout << "   |";
		Align(rowsSum[i]);
		cout << rowsSum[i] << endl;
	}
	for (int i = 0; i < 2+cols; i++) {
		cout << "----";
	}
	cout << endl;
	for (int i = 0; i < cols; i++) {
		Align(colsSum[i]);
		cout << colsSum[i];
	}
	cout << "   |";
	Align(globalSum);
	cout << globalSum << endl;

	return 0;
}