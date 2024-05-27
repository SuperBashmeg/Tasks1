#include <iostream>
using namespace std;

void printSqauare(int w, int h) {
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

int main() {
	printSqauare(5, 9);
	return 0;
}