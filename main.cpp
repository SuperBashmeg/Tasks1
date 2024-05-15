#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

double findMaxElementOfArray(double arr[], int size) {
	int maxI = 0;
	double max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			maxI = i;
			max = arr[i];
		}
	}
	return maxI;
}

double findMinElementOfArray(double arr[], int size) {
	int minI = 0;
	double min = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < min) {
			minI = i;
			min = arr[i];
		}
	}
	return minI;
}

void printTask1(double arr[], int size) {
	double sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			sum += arr[i];
		}
	}
	cout << "Sum of all negative elements is - " << setprecision(20) << sum << endl;
}

void printTask2(double arr[], int size) {
	double min = findMinElementOfArray(arr, size);
	double max = findMaxElementOfArray(arr, size);
	double sum = 1;
	for (size_t i = min; i < max-1; i++)
	{
		sum *= arr[i];
	}
	cout << "Multiplication of all elements between " << min+1 << " and " << max+1 << " is - " << sum << endl;
}

void printTask3(double arr[], int size) {
	double sum = 1;
	for (size_t i = 0; i < size; i+=2)
	{
		sum *= arr[i];
	}
	cout << "Multiplication of all elements with even position - " << setprecision(20) << sum << endl;
}

void printTask4(double arr[], int size) {
	int firstNegativeI = 0;
	int lastNegativeI = 0;
	double sum = 1;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < 0 && !firstNegativeI) {
			firstNegativeI = i;
		}
		if (arr[i] < 0) {
			lastNegativeI = i;
		}
	}
	for (size_t i = firstNegativeI + 1; i < lastNegativeI; i++)
	{
		sum *= arr[i];
	}
	cout << "Sum of all elements between first and last negatives - " << setprecision(20) << sum << endl;
}

int main() {
	const int maxMemory = 1000;
	int realMemory = 0;
	do
	{
		cout << "Enter Size Of Array: ";
		cin >> realMemory;
	} while (!(realMemory > 0 && realMemory < maxMemory));
	
	int firstMonth, lastMonth;
	double numbers[maxMemory];
	for (size_t i = 0; i < realMemory; i++)
	{
		cout << "Enter number for " << i + 1 << " element of an array: ";
		cin >> numbers[i];
	}
	printTask1(numbers, realMemory);
	printTask2(numbers, realMemory);
	printTask3(numbers, realMemory);
	printTask4(numbers, realMemory);
	return 0;
}