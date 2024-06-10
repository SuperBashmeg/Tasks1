#include "lib.h"

template<typename T>
T* init_arr(int size) 
{
	T* arr = new T[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
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
void add_elem_to_arr(T*& arr, int& size, T elem, int index) {
	size++;
	T* new_arr = new T[size];
	for (int i = 0; i < size; i++) {
		if (i < index) {
			new_arr[i] = arr[i];
		}
		else if (i == index) {
			new_arr[i] = elem;
		}
		else {
			new_arr[i] = arr[i - 1];
		}
	}
	delete[] arr;
	arr = new_arr; 
}

int find_elem_in_arr(int* arr, int size, int elem) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == elem) {
			return i;
		}
	}
	return -1;
}

template<typename T>
void create_array_from_2_arrays(T* arr1, T*arr2, int size1, int size2) {
	int new_array_size = 0;
	T* new_arr = new T[0];
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr1[i] == arr2[j]) {
				if (find_elem_in_arr(new_arr, new_array_size, arr1[i]) == -1) {
					add_elem_to_arr<int>(new_arr, new_array_size, arr1[i], new_array_size);
				}
			}
		}
	}
	
	print_arr<int>(new_arr, new_array_size);
}





int main() {
	srand(time(0));
	int arr_size_1;
	int arr_size_2;
	cout << "Enter the size of the first array: ";
	cin >> arr_size_1;
	cout << "Enter the size of the second array: ";
	cin >> arr_size_2;
	int* arr1 = init_arr<int>(arr_size_1);
	int* arr2 = init_arr<int>(arr_size_2);
	int newsize = 0;
	print_arr<int>(arr1, arr_size_1);
	print_arr<int>(arr2, arr_size_2);
	create_array_from_2_arrays<int>(arr1, arr2, arr_size_1, arr_size_2);


	return 0;
}