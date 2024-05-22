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
	const int cols = 10;
	int matrix[rows][cols];
	int matrix2[rows][cols/2];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			matrix[i][j] = rand() % 50;
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
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols / 2; j++) {
			matrix2[i][j] = matrix[i][j * 2] + matrix[i][j * 2 + 1];
		}
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols / 2; j++) {
			Align(matrix2[i][j]);
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}