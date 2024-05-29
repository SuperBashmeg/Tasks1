#include "func_arr.h"

int main() {
	const int size = 100;
	int arr[size];
	int key;
	array_init(arr, size);
	cout << "Enter key: ";
	cin >> key;
	int index = linear_search(arr, size, key);
	if (index != -1)
		cout << "Element found at index " << index << endl;
	else
		cout << "Element not found" << endl;
	return 0;
}