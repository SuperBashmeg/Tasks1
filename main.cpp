#include <iostream>
using namespace std;

int main() {
	int a, b, temp, num;
	cout << "Enter range limits: ";
	cin >> a >> b;
	if (b < a) {
		temp = a;
		a = b;
		b = temp;
	}
	while (true)
	{
		cout << "Enter number: ";
		cin >> num;
		if (a <= num && num <= b) {
			cout << "Correct Number!!!" << endl;
			break;
		}
		else
		{
			cout << "YOU ARE STUPID IDIOT ENTER NUMBER WHAT INCLUDED IN RANGE!!!" << endl;
		}
	}
	return 0;
}