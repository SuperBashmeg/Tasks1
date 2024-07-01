#include "lib.h"

double eurToUah(double amount) {
	return amount * 33.5;
}

double uahToEur(double amount) {
	return amount / 33.5;
}

double usdToUah(double amount) {
	return amount * 28.1;
}

double uahToUsd(double amount) {
	return amount / 28.1;
}

double eurToUsd(double amount) {
	return amount * 1.18;
}

double usdToEur(double amount) {
	return amount / 1.18;
}

int main() {
	cout << "Currency Converter" << endl;
	cout << "1. EUR to UAH" << endl;
	cout << "2. UAH to EUR" << endl;
	cout << "3. USD to UAH" << endl;
	cout << "4. UAH to USD" << endl;
	cout << "5. EUR to USD" << endl;
	cout << "6. USD to EUR" << endl;
	cout << "7. Exit" << endl;
	cout << "Enter your choice: ";
	int choice;
	cin >> choice;
	double amount;
	switch (choice) {
	case 1:
		cout << "Enter amount of EUR: ";
		cin >> amount;
		cout << "Amount of UAH: " << eurToUah(amount) << endl;
		break;
	case 2:
		cout << "Enter amount of UAH: ";
		cin >> amount;
		cout << "Amount of EUR: " << uahToEur(amount) << endl;
		break;
	case 3:
		cout << "Enter amount of USD: ";
		cin >> amount;
		cout << "Amount of UAH: " << usdToUah(amount) << endl;
		break;
	case 4:
		cout << "Enter amount of UAH: ";
		cin >> amount;
		cout << "Amount of USD: " << uahToUsd(amount) << endl;
		break;
	case 5:
		cout << "Enter amount of EUR: ";
		cin >> amount;
		cout << "Amount of USD: " << eurToUsd(amount) << endl;
		break;
	case 6:
		cout << "Enter amount of USD: ";
		cin >> amount;
		cout << "Amount of EUR: " << usdToEur(amount) << endl;
		break;
	case 7:
		return 0;
	default:
		cout << "Invalid choice" << endl;
	}
	return 0;
}