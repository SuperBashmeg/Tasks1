#include <iostream>
using namespace std;

long long factorial(int w) {
	long long fact = 1;
	for (int i = 1; i <= w; i++) {
		fact *= i;
	}
	return fact;
}

int main() {
	//Enter the number for which you want to find the factorial
	int num;
	cout << "Enter the number for which you want to find the factorial: ";
	cin >> num;
	long long fact = factorial(num);
	cout << "Factorial of " << num << " is " << fact << endl;
	return 0;
}