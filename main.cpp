#include <iostream>
using namespace std;

int GetNumberCube(int num) {
	return num * num * num;
}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	cout << "The cube of " << num << " is " << GetNumberCube(num) << endl;
	return 0;
}