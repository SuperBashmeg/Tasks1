#include "lib.h"

void fillArray(int rows, int cols, int arr[][100], int minVal, int maxVal) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = minVal + rand() % (maxVal - minVal + 1);
        }
    }
}


void generateSecondArray(int arr1[][100], int rows1, int cols1, int arr2[][100]) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < 5; ++j) {

            arr2[i][j] = arr1[i][j * 2] + arr1[i][j * 2 + 1];
        }
    }
}


void displayArray(int rows, int cols, int arr[][100], const string& title) {
    cout << title << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    srand(time(0));

    const int rows1 = 5, cols1 = 10;
    const int rows2 = 5, cols2 = 5;
    int arr1[100][100];
    int arr2[100][100];

    fillArray(rows1, cols1, arr1, 0, 50);

    generateSecondArray(arr1, rows1, cols1, arr2);

    displayArray(rows1, cols1, arr1, "First Array (5x10):");
    displayArray(rows2, cols2, arr2, "Second Array (5x5):");

    return 0;
}