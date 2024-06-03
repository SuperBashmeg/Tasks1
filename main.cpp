#include "lib.h"

int gsotce(int arr[], int size, int startIndex, int endIndex, int currentIndex, int totalsum) { //get sum of ten consecutive elements
	if (currentIndex == endIndex) {
		return totalsum;
	}
	totalsum += arr[currentIndex];
	gsotce(arr, size, startIndex, endIndex, currentIndex + 1, totalsum);
}

int gpomctn(int arr[], int size, int minimalindex, int lastindex) { //get position of minimal consecutive ten numbers
	if (lastindex == size - 11) {
		return minimalindex;
	}
	if (gsotce(arr, size, lastindex, lastindex + 10, lastindex, 0) < gsotce(arr, size, minimalindex, minimalindex + 10, minimalindex, 0)) {
		minimalindex = lastindex;
	}
	gpomctn(arr, size, minimalindex, lastindex + 1);
}

int main() {
	srand(time(0));
	const int SIZE = 100;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 250;
	}
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	gpomctn(arr, SIZE, 0, 0);
	cout << endl << "Position of minimal consecutive ten numbers: " << gpomctn(arr, SIZE, 0, 0) << endl;
	return 0;
}