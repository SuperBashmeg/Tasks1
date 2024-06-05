#include "lib.h"

double adittion(double* a, double* b) {
	return *a + *b;
}

double substraction(double* a, double* b) {
	return *a - *b;
}

double multiplication(double* a, double* b) {
	return *a * *b;
}

double division(double* a, double* b) {
	return *a / *b;
}

double power(double* a, double* b) {
	return pow(*a, *b);
}

double squareRoot(double* a) {
	return sqrt(*a);
}

double absolute(double* a) {
	return abs(*a);
}

double factorial(double* a) {
	double result = 1;
	for (int i = 1; i <= *a; i++) {
		result *= i;
	}
	return result;
}



int main() {
	double a, b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "a + b = " << adittion(&a, &b) << endl;
	cout << "a - b = " << substraction(&a, &b) << endl;
	cout << "a * b = " << multiplication(&a, &b) << endl;
	cout << "a / b = " << division(&a, &b) << endl;
	cout << "a ^ b = " << power(&a, &b) << endl;
	cout << "sqrt(a) = " << squareRoot(&a) << endl;
	cout << "|a| = " << absolute(&a) << endl;
	cout << "a! = " << factorial(&a) << endl;
	return 0;
}