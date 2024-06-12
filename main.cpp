#include "lib.h"

template<typename T>
T* init_arr(int size) 
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
	cout << endl;
}

template<typename T>
void func(T* arr, int size, T*& sum, T*& mul) {
	if (sum == nullptr) {
		sum = new T(0);
	}
	if (mul == nullptr) {
		mul = new T(1);
	}
	*sum = 0;
	*mul = 1;
	for (int i = 0; i < size; i++) {
		*sum += *(arr + i);
		*mul *= *(arr + i);
	}
}


int main() {
	srand(time(0));
	int arr_size;
	cout << "Enter the size of the first array: ";
	cin >> arr_size;
	int* arr = init_arr<int>(arr_size);
	print_arr<int>(arr, arr_size);
	int* sum = nullptr;
	int* mul = nullptr;
	func<int>(arr, arr_size, sum, mul);
	cout << "Sum: " << *sum << endl;
	cout << "Mul: " << *mul << endl;



	return 0;
}