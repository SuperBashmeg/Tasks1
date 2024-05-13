#include <iostream>
using namespace std;

int main() {
	int breadAmount = 10;
	int waterAmount = 20;
	int coockieAmount = 5;
	int candyAmount = 3;
	int breadPrice = 3;
	int waterPrice = 1;
	int coockiePrice = 5;
	int candyPrice = 10;
	int totalMoney = 0;
	int timeMoney = 0;
	bool exit = false;
	bool secondExit = false;
	int selectedItem = 0;
	int currentAmount = 0;
	int currentPrice = 0;

	while (!exit)
	{
		while (!secondExit)
		{
			cout << "goods: 1 bread(price: " << breadPrice << "; amount:" << breadAmount << ");";
			cout << " 2 water(price: " << waterPrice << "; amount:" << waterAmount << ");";
			cout << " 3 coockie(price: " << coockiePrice << "; amount:" << coockieAmount << ");";
			cout << " 4 candy(price: " << candyPrice << "; amount:" << candyAmount << ");" << endl;
			cout << "Enter number of item or 0 to stop: ";
			cin >> selectedItem;
			
			if (0 <= selectedItem && selectedItem <= 4) {
				switch (selectedItem)
				{
				case 0: {
					secondExit = true;
				}break;
				default:
					cout << "Enter amount of the item: ";
					cin >> currentAmount;
					if (currentAmount <= 0) {
						currentAmount = INT_MAX;
					}
					break;
				}

				switch (selectedItem)
				{
				case 0: {
					secondExit = true;
				}break;
				case 1: {
					if (breadAmount - currentAmount >= 0) {
						currentPrice = breadPrice * currentAmount;
						timeMoney += currentPrice;
						cout << "Price of that perchuce: " << currentPrice << ". Total price of perphace: " << timeMoney << endl;
						breadAmount -= currentAmount;
					}
					else {
						cout << "Not enough quantity of an bread" << endl;
					}
				}break;
				case 2: {
					if (waterAmount - currentAmount >= 0) {
						currentPrice = waterPrice * currentAmount;
						timeMoney += currentPrice;
						cout << "Price of that perchuce: " << currentPrice << ". Total price of perphace: " << timeMoney << endl;
						waterAmount -= currentAmount;
					}
					else {
						cout << "Not enough quantity of an water" << endl;
					}
				}break;
				case 3: {
					if (coockieAmount - currentAmount >= 0) {
						currentPrice = coockiePrice * currentAmount;
						timeMoney += currentPrice;
						cout << "Price of that perchuce: " << currentPrice << ". Total price of perphace: " << timeMoney << endl;
						coockieAmount -= currentAmount;
					}
					else {
						cout << "Not enough quantity of an coockies" << endl;
					}
				}break;
				case 4: {
					if (candyAmount - currentAmount >= 0) {
						currentPrice = candyPrice * currentAmount;
						timeMoney += currentPrice;
						cout << "Price of that perchuce: " << currentPrice << ". Total price of perphace: " << timeMoney << endl;
						candyAmount -= currentAmount;
					}
					else {
						cout << "Not enough quantity of an candy" << endl;
					}
				}break;
				default:
					cout << "Enter amount of the item: ";
					cin >> currentAmount;
					break;
				}
			}
			currentPrice = 0;
		}
		totalMoney += timeMoney;
		cout << "Total price of perhapce: " << timeMoney << endl << "Total Money from this session: " << totalMoney << endl;
		timeMoney = 0;
		secondExit = false;
		
		cout << "Do you want to stop working for today?(0 - Yes, 1 - No): ";
		cin >> exit;
		exit = !exit;
	}

	cout << "In this session you got " << totalMoney << "$";

	return 0;
}