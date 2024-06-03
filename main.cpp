#include "func_recursion.h"

int main() {
	int arr[10][10][10];
	int arr2[10][10];
	int arr3[10];
	arrayInit(arr, 10);
	arrayInit(arr2, 10);
	arrayInit(arr3, 10);
	int num1 = 5;
	int num2 = 10;
	int num3 = 15;
	int Size = 10;
	cout << "Max value of 5 and 10 is: " << MaxValue(num1, num2) << endl;
	cout << "Max value of 5, 10 and 15 is: " << MaxValue(num1, num2, num3) << endl;
	displayArray(arr, 10);
	cout << "Max value of 10 elements in 1D array is: " << MaxValue(arr3, Size, arr3[0], 0) << endl;
	displayArray(arr2, 10);
	cout << "Max value of 100 elements in 2D array is: " << MaxValue(arr2, Size, arr2[0][0], 0, 0) << endl;
	displayArray(arr, 10);
	cout << "Max value of 1000 elements in 3D array is: " << MaxValue(arr, Size, arr[0][0][0], 0, 0, 0) << endl;
	return 0;
}