#include "func_recursion.h"

int MaxValue(int arr[], int Size, int maxValue, int currentIteration) {
	if (currentIteration == Size) {
		return maxValue;
	}
	if (arr[currentIteration] > maxValue) {
		maxValue = arr[currentIteration];
	}
	return MaxValue(arr, Size, maxValue, currentIteration + 1);
	
}

int MaxValue(int arr[10][10], int Size, int maxValue, int currentX, int currentY) {
	if (currentX == Size) {
		return maxValue;
	}
	if (arr[currentX][currentY] > maxValue) {
		maxValue = arr[currentX][currentY];
	}
	if (currentY == Size - 1) {
		return MaxValue(arr, Size, maxValue, currentX + 1, 0);
	}
	return MaxValue(arr, Size, maxValue, currentX, currentY + 1);
}

int MaxValue(int arr[10][10][10], int Size, int maxValue, int currentX, int currentY, int currentZ) {
	if (currentX == Size) {
		return maxValue;
	}
	if (arr[currentX][currentY][currentZ] > maxValue) {
		maxValue = arr[currentX][currentY][currentZ];
	}
	if (currentY == Size - 1 && currentZ == Size - 1) {
		return MaxValue(arr, Size, maxValue, currentX + 1, 0, 0);
	}
	if (currentZ == Size - 1) {
		return MaxValue(arr, Size, maxValue, currentX, currentY + 1, 0);
	}
	return MaxValue(arr, Size, maxValue, currentX, currentY, currentZ + 1);
}

int MaxValue(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}

int MaxValue(int a, int b, int c) {
	if (a > b && a > c) {
		return a;
	}
	else if (b > a && b > c) {
		return b;
	}
	else {
		return c;
	}
}

int arrayInit(int arr[], int Size) {
	srand(time(0));
	for (int i = 0; i < Size; i++) {
		arr[i] = rand() % 100;
	}
	return 0;
}

int arrayInit(int arr[10][10], int Size) {
	srand(time(0));
	for (int i = 0; i < Size; i++) {
		for (int j = 0; j < Size; j++) {
			arr[i][j] = rand() % 100;
		}
	}
	return 0;
}

int arrayInit(int arr[10][10][10], int Size) {
	srand(time(0));
	for (int i = 0; i < Size; i++) {
		for (int j = 0; j < Size; j++) {
			for (int k = 0; k < Size; k++) {
				arr[i][j][k] = rand() % 100;
			}
		}
	}
	return 0;
}

void displayArray(int arr[], int Size) {
	for (int i = 0; i < Size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}	

void displayArray(int arr[10][10], int Size) {
	for (int i = 0; i < Size; i++) {
		for (int j = 0; j < Size; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void displayArray(int arr[10][10][10], int Size) {
	for (int i = 0; i < Size; i++) {
		for (int j = 0; j < Size; j++) {
			for (int k = 0; k < Size; k++) {
				cout << arr[i][j][k] << " ";
			}
			cout << endl;
		}
	}
}