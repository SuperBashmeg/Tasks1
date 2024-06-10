#include "lib.h"

template<typename T>
T* init_arr(int size) 
{
	T* arr = new T[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter element " << i << ": ";
		cin >> arr[i];
	}   
	return arr;
}

template<typename T>
void print_arr(T* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

template<typename T>
void remove_element_from_array(T*& arr, int& size, int index) {
	size--;
	T* new_arr = new T[size];
	for (int i = 0; i < size; i++) {
		if (i < index) {
			new_arr[i] = arr[i];
		}
		else {
			new_arr[i] = arr[i + 1];
		}
	}
	delete[] arr;
	arr = new_arr; 
}

void remove_all_even_numbers_from_array(int*& arr, int& size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			remove_element_from_array(arr, size, i);
			i--;
		}
	}
}

void remove_all_odd_numbers_from_array(int*& arr, int& size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 != 0) {
			remove_element_from_array(arr, size, i);
			i--;
		}
	}
}

int main() {
	srand(time(0));
	int arr_size_1;
	cout << "Enter size of array: ";
	cin >> arr_size_1;
	int* arr1 = init_arr<int>(arr_size_1);
	print_arr<int>(arr1, arr_size_1);
	//Make menu for user to choose what to do with array
	int choice;
	cout << "1. Remove all even numbers from array" << endl;
	cout << "2. Remove all odd numbers from array" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	switch (choice) {
	case 1:
		remove_all_even_numbers_from_array(arr1, arr_size_1);
		break;
	case 2:
		remove_all_odd_numbers_from_array(arr1, arr_size_1);
		break;
	default:
		cout << "Invalid choice" << endl;
		break;
	}
	if (arr_size_1 > 0) {
		print_arr<int>(arr1, arr_size_1);
		delete[] arr1;
	}
	else {
		cout << "Array is empty" << endl;
	}

	return 0;
}