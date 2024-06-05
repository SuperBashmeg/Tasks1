#include "lib.h"

//Change places of the two variebles below
void change(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main() {
	int* a = new int{ 10 };
	int * b = new int{ 20 };
	change(a, b);
	cout << "a - " << *a << ", b - " << *b << endl;
	return 0;
}