#include "lib.h"

//get max number using pointers
int maxnum(int* a, int* b) {
	if (*a > *b) {
		return *a;
	}
	else {
		return *b;
	}
}


int main() {
	int* a = new int{ 10 };
	int * b = new int{ 20 };
	cout << "Max number is: " << maxnum(a, b) << endl;
	return 0;
}