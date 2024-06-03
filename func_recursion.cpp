#include "func_recursion.h"


void matrix_Init(int matrix[5][5], int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = rand() % 1000;
		}
	}
}

void matrix_Init(double matrix[5][5], int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = rand() % 10000 / 10;
		}
	}
}

void matrix_Init(char matrix[5][5], int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			matrix[i][j] = rand() % 255;
		}
	}
}

void matrix_Print(int matrix[5][5], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void matrix_Print(double matrix[5][5], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void matrix_Print(char matrix[5][5], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int maxInMainDiagonal(int matrix[5][5], int size, int maxNumber, int currentij) {
	if (currentij == size) {
		return maxNumber;
	}
	if (matrix[currentij][currentij] > maxNumber) {
		maxNumber = matrix[currentij][currentij];
	}
	return maxInMainDiagonal(matrix, size, maxNumber, currentij + 1);
}

double maxInMainDiagonal(double matrix[5][5], int size, double maxNumber, int currentij) {
	if (currentij == size) {
		return maxNumber;
	}
	if (matrix[currentij][currentij] > maxNumber) {
		maxNumber = matrix[currentij][currentij];
	}
	return maxInMainDiagonal(matrix, size, maxNumber, currentij + 1);
}

char maxInMainDiagonal(char matrix[5][5], int size, char maxNumber, int currentij) {
	if (currentij == size) {
		return maxNumber;
	}
	if (matrix[currentij][currentij] > maxNumber) {
		maxNumber = matrix[currentij][currentij];
	}
	return maxInMainDiagonal(matrix, size, maxNumber, currentij + 1);
}

void sortMatrix(int matrix[5][5], int size, int currenti, int currentj) {
	if (currenti == size-1) {
		return;
	}
	if (currentj == size-1) {
		return sortMatrix(matrix, size, currenti + 1, 0);
	}
	if (matrix[currenti][currentj] > matrix[currenti][currentj + 1]) {
		int temp = matrix[currenti][currentj];
		matrix[currenti][currentj] = matrix[currenti][currentj + 1];
		matrix[currenti][currentj + 1] = temp;
	}
	return sortMatrix(matrix, size, currenti, currentj + 1);
}

void sortMatrix(double matrix[5][5], int size, int currenti, int currentj) {
	if (currenti == size-1) {
		return;
	}
	if (currentj == size-1) {
		return sortMatrix(matrix, size, currenti + 1, 0);
	}
	if (matrix[currenti][currentj] > matrix[currenti][currentj + 1]) {
		double temp = matrix[currenti][currentj];
		matrix[currenti][currentj] = matrix[currenti][currentj + 1];
		matrix[currenti][currentj + 1] = temp;
	}
	return sortMatrix(matrix, size, currenti, currentj + 1);
}

void sortMatrix(char matrix[5][5], int size, int currenti, int currentj) {
	if (currenti == size-1) {
		return;
	}
	if (currentj == size-1) {
		return sortMatrix(matrix, size, currenti + 1, 0);
	}
	if (matrix[currenti][currentj] > matrix[currenti][currentj + 1]) {
		char temp = matrix[currenti][currentj];
		matrix[currenti][currentj] = matrix[currenti][currentj + 1];
		matrix[currenti][currentj + 1] = temp;
	}
	return sortMatrix(matrix, size, currenti, currentj + 1);
}