#include "func_arr.h"

void array_init(int arr[], int size) {
	int i;
	srand(time(0));
	for (i = 0; i < size; i++) {
		arr[i] = rand() % 1000;
	}
}

void display_array(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void array_sort(int arr[], int size) {
	int i, j, temp;
	for (i = 0; i < size - 1; i++) {
		for (j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int binary_search(int arr[], int size, int key) {
	int startindex = 0;
	int endindex = size - 1;
	int mid = (startindex + endindex) / 2;
	while (startindex <= endindex) {
		if (arr[mid] == key) {
			return mid;
		}
		else if (arr[mid] < key) {
			startindex = mid + 1;
		}
		else {
			endindex = mid - 1;
		}
		mid = (startindex + endindex) / 2;
	}
	return -1;
}