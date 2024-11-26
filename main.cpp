#include "lib.h"

void fillArray(int rows, int cols, int arr[][100], int minVal, int maxVal) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = minVal + rand() % (maxVal - minVal + 1);
        }
    }
}

int sumArray(int rows, int cols, int arr[][100]) {
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int findMin(int rows, int cols, int arr[][100]) {
    int minVal = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] < minVal) {
                minVal = arr[i][j];
            }
        }
    }
    return minVal;
}

int findMax(int rows, int cols, int arr[][100]) {
    int maxVal = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

int main() {
    srand(time(0));

    const int rows = 4;
    const int cols = 5;
    int arr[100][100];

    fillArray(rows, cols, arr, -50, 50);

    cout << "Array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    int sum = sumArray(rows, cols, arr);
    int minVal = findMin(rows, cols, arr);
    int maxVal = findMax(rows, cols, arr);
    double average = static_cast<double>(sum) / (rows * cols);

    cout << "\nSum: " << sum << endl;
    cout << "Avarage: " << average << endl;
    cout << "Min:" << minVal << endl;
    cout << "Max: " << maxVal << endl;

    return 0;
}