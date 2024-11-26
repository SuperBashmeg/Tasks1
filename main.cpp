#include "lib.h"

// Function to initialize a matrix with random values
void initializeMatrix(int matrix[3][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = rand() % 50; // Random numbers between 0 and 50
        }
    }
}

// Overloaded functions for double
void initializeMatrix(double matrix[3][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = static_cast<double>(rand() % 50) / 10.0; // Random doubles
        }
    }
}

// Function to display a matrix
template <typename T>
void displayMatrix(T matrix[3][3], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to find the maximum and minimum on the main diagonal
template <typename T>
void findMinMaxDiagonal(T matrix[3][3], int size) {
    T minElem = matrix[0][0];
    T maxElem = matrix[0][0];

    for (int i = 0; i < size; ++i) {
        if (matrix[i][i] < minElem)
            minElem = matrix[i][i];
        if (matrix[i][i] > maxElem)
            maxElem = matrix[i][i];
    }

    cout << "Min on diagonal: " << minElem << endl;
    cout << "Max on diagonal: " << maxElem << endl;
}

// Function to sort each row of the matrix
template <typename T>
void sortMatrixRows(T matrix[3][3], int size) {
    for (int i = 0; i < size; ++i) {
        sort(matrix[i], matrix[i] + size);
    }
}

int main() {
    const int size = 3;
    int intMatrix[3][3];
    double doubleMatrix[3][3];

    // Integer matrix
    cout << "Integer Matrix:" << endl;
    initializeMatrix(intMatrix, size);
    displayMatrix(intMatrix, size);
    findMinMaxDiagonal(intMatrix, size);
    sortMatrixRows(intMatrix, size);
    cout << "Sorted Matrix:" << endl;
    displayMatrix(intMatrix, size);

    // Double matrix
    cout << "\nDouble Matrix:" << endl;
    initializeMatrix(doubleMatrix, size);
    displayMatrix(doubleMatrix, size);
    findMinMaxDiagonal(doubleMatrix, size);
    sortMatrixRows(doubleMatrix, size);
    cout << "Sorted Matrix:" << endl;
    displayMatrix(doubleMatrix, size);

    return 0;
}