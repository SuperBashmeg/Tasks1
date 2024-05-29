#include "func_arr.h"

void array_init(int arr[], int size) {
	int i;
	srand(time(0));
	for (i = 0; i < size; i++) {
		arr[i] = rand() % 1000;
		cout << arr[i] << " ";
	}
}

int linear_search(int arr[], int size, int key) {
	int i;
	for (i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}