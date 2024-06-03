#include "func_recursion.h"

int main() {
	int matrix[5][5];
	double matrix2[5][5];
	char matrix3[5][5];
	matrix_Init(matrix, 5);
	matrix_Init(matrix2, 5);
	matrix_Init(matrix3, 5);
	cout << endl << endl;
	matrix_Print(matrix, 5);
	cout << endl;
	matrix_Print(matrix2, 5);
	cout << endl;
	matrix_Print(matrix3, 5);
	cout << endl;
	cout << endl << endl;
	cout << maxInMainDiagonal(matrix, 5, 0, 0) << endl;
	cout << maxInMainDiagonal(matrix2, 5, 0, 0) << endl;
	cout << maxInMainDiagonal(matrix3, 5, 0, 0) << endl;
	cout << endl << endl;
	sortMatrix(matrix, 5, 0, 0);
	matrix_Print(matrix, 5);
	cout << endl << endl;
	cout << endl;
	sortMatrix(matrix2, 5, 0, 0);
	matrix_Print(matrix2, 5);
	cout << endl << endl;
	cout << endl;
	sortMatrix(matrix3, 5, 0, 0);
	matrix_Print(matrix3, 5);
	cout << endl << endl;

	return 0;
}