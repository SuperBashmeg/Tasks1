#include "lib.h"

template<typename T>T* 
init_arr(int size) 
{
	T* arr = new T[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}   
	return arr;
}

template<typename T>
void print_arr(T* arr, int size)
{
	for (int i = 0; i < size; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl; }

int main() {
	srand(time(0));
	int arr_size_1;
	int arr_size_2;
	cout << "Enter the size of the first array: ";
	cin >> arr_size_1;
	cout << "Enter the size of the second array: ";
	cin >> arr_size_2;
	int* arr3 = init_arr<int>(arr_size_1+arr_size_2);
	cout << "Array:";
	print_arr(arr3, arr_size_1 + arr_size_2);

	return 0;
}