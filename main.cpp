#include "lib.h"

template<typename T>
T* init_arr(int size) 
{
	T* arr = new T[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20-10;
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
void func(T* arr, int size, T*& negative, T*& positive, T*& zero) {
	if (negative == nullptr) {
		negative = new T(0);
	}
	if (positive == nullptr) {
		positive = new T(0);
	}
	if (zero == nullptr) {
		zero = new T(0);
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] < 0) {
			*negative += 1;
		}
		else if (arr[i] > 0) {
			*positive += 1;
		}
		else {
			*zero += 1;
		}
	}
}


int main() {
	srand(time(0));
	int arr_size;
	cout << "Enter the size of the first array: ";
	cin >> arr_size;
	int* arr = init_arr<int>(arr_size);
	print_arr<int>(arr, arr_size);
	int* positive = nullptr;
	int* negative = nullptr;
	int* zero = nullptr;
	func<int>(arr, arr_size, negative, positive, zero);
	cout << "Negative: " << *negative << endl;
	cout << "Positive: " << *positive << endl;
	cout << "Zero: " << *zero << endl;
	return 0;
}