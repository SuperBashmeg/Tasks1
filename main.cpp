#include <iostream>
#include <Windows.h>
using namespace std;

void ShowVerticalLine(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);
	char vs = 186;
	cout << vs;
	SetConsoleTextAttribute(hConsole, color);
}

void DrawUpperPart(char selected, int color, int number) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);
	char lu = 201;
	char us = 205;
	char ru = 187;
	cout << lu;
	for (int i = 0; i < 9; i++) {
		cout << us;
	}
	cout << ru << endl;
	SetConsoleTextAttribute(hConsole, color);
	ShowVerticalLine(color);
	cout << number << "       ";
	if (number < 10) {
		cout << " ";
	}
	ShowVerticalLine(color);
	cout << endl;
	ShowVerticalLine(color);
	cout << selected << "        ";
	ShowVerticalLine(color);
	cout << endl;
}

void DrawLowerPart(char selected, int color, int number) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);
	char ld = 200;
	char ds = 205;
	char rd = 188;
	SetConsoleTextAttribute(hConsole, color);
	ShowVerticalLine(color);
	cout << "        " << selected;
	ShowVerticalLine(color);
	cout << endl;
	ShowVerticalLine(color);
	if (number < 10) {
		cout << " ";
	}
	cout << "       " << number;
	ShowVerticalLine(color);
	cout << endl;
	SetConsoleTextAttribute(hConsole, 15);
	cout << ld;
	for (int i = 0; i < 9; i++) {
		cout << ds;
	}
	cout << rd << endl;
	SetConsoleTextAttribute(hConsole, color);
}

void DrawEmptyLine(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);
	char vs = 186;
	cout << vs;
	for (int i = 0; i < 9; i++) {
		cout << " ";
	}
	cout << vs << endl;
	SetConsoleTextAttribute(hConsole, color);
}

int Colorize(int color) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	if (color == 0) {
		color = 15;
		SetConsoleTextAttribute(hConsole, color);
	}
	else {
		color = 12;
		SetConsoleTextAttribute(hConsole, color);
	}
	return color;
}

void ShowCard1(int type, int color) {
	int height = 17;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color = Colorize(color);
	char selected = type + 3;
	DrawUpperPart(selected, color, 1);
	for (size_t i = 0; i < height-4; i++)
	{
		if (i == (height - 4)/2) {
			ShowVerticalLine(color);
			cout << "    " << selected <<"    ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else {
			DrawEmptyLine(color);
		}
	}
	DrawLowerPart(selected, color, 1);
	SetConsoleTextAttribute(hConsole, 15);
}

void ShowCard2(int type, int color) {
	int height = 17;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color = Colorize(color);
	char selected = type + 3;
	DrawUpperPart(selected, color, 2);
	for (size_t i = 0; i < height - 4; i++)
	{
		if (i == 0 || i == height - 5) {
			ShowVerticalLine(color);
			cout << "    " << selected << "    ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else {
			DrawEmptyLine(color);
		}
	}
	DrawLowerPart(selected, color, 2);
	SetConsoleTextAttribute(hConsole, 15);
}

void ShowCard3(int type, int color) {
	int height = 17;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color = Colorize(color);
	char selected = type + 3;
	DrawUpperPart(selected, color, 3);
	for (size_t i = 0; i < height - 4; i++)
	{
		if (i == 0 || i == height - 5 || i == (height - 4) / 2) {
			ShowVerticalLine(color);
			cout << "    " << selected << "    ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else {
			DrawEmptyLine(color);
		}
	}
	DrawLowerPart(selected, color, 3);
	SetConsoleTextAttribute(hConsole, 15);
}

void ShowCard4(int type, int color) {
	int height = 17;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color = Colorize(color);
	char selected = type + 3;
	DrawUpperPart(selected, color, 4);
	for (size_t i = 0; i < height - 4; i++)
	{
		if (i == 0 || i == height - 5) {
			ShowVerticalLine(color);
			cout << "  " << selected << "   " << selected << "  ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else {
			DrawEmptyLine(color);
		}
	}
	DrawLowerPart(selected, color, 4);
	SetConsoleTextAttribute(hConsole, 15);
}

void ShowCard5(int type, int color) {
	int height = 17;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color = Colorize(color);
	char selected = type + 3;
	DrawUpperPart(selected, color, 5);
	for (size_t i = 0; i < height - 4; i++)
	{
		if (i == 0 || i == height - 5) {
			ShowVerticalLine(color);
			cout << "  " << selected << "   " << selected << "  ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else if (i == (height - 4) / 2) {
			ShowVerticalLine(color);
			cout << "    " << selected << "    ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else {
			DrawEmptyLine(color);
		}
	}
	DrawLowerPart(selected, color, 5);
	SetConsoleTextAttribute(hConsole, 15);
}

void ShowCard6(int type, int color) {
	int height = 17;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color = Colorize(color);
	char selected = type + 3;
	DrawUpperPart(selected, color, 6);
	for (size_t i = 0; i < height - 4; i++)
	{
		if (i == 0 || i == height - 5 || i == (height - 4) / 2) {
			ShowVerticalLine(color);
			cout << "  " << selected << "   " << selected << "  ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else {
			DrawEmptyLine(color);
		}
	}
	DrawLowerPart(selected, color, 6);
	SetConsoleTextAttribute(hConsole, 15);
}

void ShowCard7(int type, int color) {
	int height = 17;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color = Colorize(color);
	char selected = type + 3;
	DrawUpperPart(selected, color, 7);
	for (size_t i = 0; i < height - 4; i++)
	{
		if (i == 0 || i == height - 5 || i == (height - 4) / 2) {
			ShowVerticalLine(color);
			cout << "  " << selected << "   " << selected << "  ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else if (i == 2) {
			ShowVerticalLine(color);
			cout << "    " << selected << "    ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else {
			DrawEmptyLine(color);
		}
	}
	DrawLowerPart(selected, color, 7);
	SetConsoleTextAttribute(hConsole, 15);
}

void ShowCard8(int type, int color) {
	int height = 17;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color = Colorize(color);
	char selected = type + 3;
	DrawUpperPart(selected, color, 8);
	for (size_t i = 0; i < height - 4; i++)
	{
		if (i == 0 || i == height - 5 || i == (height - 4) / 2) {
			ShowVerticalLine(color);
			cout << "  " << selected << "   " << selected << "  ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else if (i == 2 || i == height - 7) {
			ShowVerticalLine(color);
			cout << "    " << selected << "    ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else {
			DrawEmptyLine(color);
		}
	}
	DrawLowerPart(selected, color, 8);
	SetConsoleTextAttribute(hConsole, 15);
}

void ShowCard9(int type, int color) {
	int height = 17;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color = Colorize(color);
	char selected = type + 3;
	DrawUpperPart(selected, color, 9);
	for (size_t i = 0; i < height - 4; i++)
	{
		if (i == 0 || i == height - 5 || i == (height - 4) / 3 || i == (height - 4) / 3 * 2) {
			ShowVerticalLine(color);
			cout << "  " << selected << "   " << selected << "  ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else if (i == 2) {
			ShowVerticalLine(color);
			cout << "    " << selected << "    ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else {
			DrawEmptyLine(color);
		}
	}
	DrawLowerPart(selected, color, 9);
	SetConsoleTextAttribute(hConsole, 15);
}

void ShowCard10(int type, int color) {
	int height = 17;
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	color = Colorize(color);
	char selected = type + 3;
	DrawUpperPart(selected, color, 10);
	for (size_t i = 0; i < height - 4; i++)
	{
		if (i == 0 || i == height - 5 || i == (height - 4) / 3 || i == (height - 4) / 3 * 2) {
			ShowVerticalLine(color);
			cout << "  " << selected << "   " << selected << "  ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else if (i == 2 || i == height - 7) {
			ShowVerticalLine(color);
			cout << "    " << selected << "    ";
			ShowVerticalLine(color);
			cout << endl;
		}
		else {
			DrawEmptyLine(color);
		}
	}
	DrawLowerPart(selected, color, 10);
	SetConsoleTextAttribute(hConsole, 15);
}

int main() {
	int color = 0;
	do
	{
		cout << "Enter the color of the card(0 for black, 1 for red): ";
		cin >> color;
	} while (!(color == 1 || color == 0));
	
	string startType;
	int type = 0;
	do
	{
		cout << "Enter the type of the card(hearts, diamonds, clubs, spades): ";
		cin >> startType;
		if (startType == "hearts") {
			type = 0;
			break;
		}
		else if (startType == "diamonds") {
			type = 1;
			break;
		}
		else if (startType == "clubs") {
			type = 2;
			break;
		}
		else if (startType == "spades") {
			type = 3;
			break;
		}
		else {
			cout << "Invalid input! Please enter again: ";
		}
	} while (true);
	int number = 0;
	do
	{
		cout << "Enter the number of the card(1-10): ";
		cin >> number;
	} while (!(number >= 1 && number <= 10));
	switch (number)
	{
	case 1:
		ShowCard1(type, color);
		break;
	case 2:
		ShowCard2(type, color);
		break;
	case 3:
		ShowCard3(type, color);
		break;
	case 4:
		ShowCard4(type, color);
		break;
	case 5:
		ShowCard5(type, color);
		break;
	case 6:
		ShowCard6(type, color);
		break;
	case 7:
		ShowCard7(type, color);
		break;
	case 8:
		ShowCard8(type, color);
		break;
	case 9:
		ShowCard9(type, color);
		break;
	case 10:
		ShowCard10(type, color);
		break;
	default:
		break;
	}
}