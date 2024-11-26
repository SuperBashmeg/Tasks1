#include "lib.h"

void fillArray(int rows, int cols, int arr[][100], int minVal, int maxVal) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = minVal + rand() % (maxVal - minVal + 1);
        }
    }
}

void calculateSums(int rows, int cols, int arr[][100], int rowSums[], int colSums[], int& totalSum) {
    totalSum = 0;
    for (int i = 0; i < rows; ++i) rowSums[i] = 0;
    for (int j = 0; j < cols; ++j) colSums[j] = 0;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            rowSums[i] += arr[i][j];
            colSums[j] += arr[i][j];
            totalSum += arr[i][j];
        }
    }
}

void displayArrayWithSums(int rows, int cols, int arr[][100], int rowSums[], int colSums[], int totalSum) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << "| " << rowSums[i] << endl;
    }

    for (int j = 0; j < cols; ++j) {
        cout << "--------";
    }
    cout << endl;

    for (int j = 0; j < cols; ++j) {
        cout << colSums[j] << "\t";
    }
    cout << "| " << totalSum << endl;
}


int main() {
    srand(time(0));

    const int rows = 3;
    const int cols = 4;
    int arr[100][100];
    int rowSums[100];
    int colSums[100];
    int totalSum = 0;

    fillArray(rows, cols, arr, 0, 9);

    calculateSums(rows, cols, arr, rowSums, colSums, totalSum);

    cout << "Array with sums:\n";
    displayArrayWithSums(rows, cols, arr, rowSums, colSums, totalSum);

    return 0;
}