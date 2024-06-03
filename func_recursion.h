#include "lib.h"

void matrix_Init(int matrix[5][5], int size);
void matrix_Init(double matrix[5][5], int size);
void matrix_Init(char matrix[5][5], int size);
void matrix_Print(int matrix[5][5], int size);
void matrix_Print(double matrix[5][5], int size);
void matrix_Print(char matrix[5][5], int size);
int maxInMainDiagonal(int matrix[5][5], int size, int maxNumber, int currentij);
double maxInMainDiagonal(double matrix[5][5], int size, double maxNumber, int currentij);
char maxInMainDiagonal(char matrix[5][5], int size, char maxNumber, int currentij);
void sortMatrix(int matrix[5][5], int size, int currenti, int currentj);
void sortMatrix(double matrix[5][5], int size, int currenti, int currentj);
void sortMatrix(char matrix[5][5], int size, int currenti, int currentj);