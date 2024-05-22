#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	const int cols = 10;
	const int rows = 10;
	int matrix[cols][rows];
	int sum = 0;
	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			matrix[i][j] = rand() % 100;
		}
	}

	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int min = matrix[0][0];
	int max = matrix[0][0];

	for (int i = 0; i < cols; i++) {
		for (int j = 0; j < rows; j++) {
			if (matrix[i][j] < min) {
				min = matrix[i][j];
			}
			if (matrix[i][j] > max) {
				max = matrix[i][j];
			}
			sum += matrix[i][j];
		}
	}
	int avg = sum / (cols * rows);
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << "Sum: " << sum << endl;
	cout << "Avg: " << avg << endl;
	return 0;
}