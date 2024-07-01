#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <Windows.h>
using namespace std;


struct fraction
{
private:
	int* numerator = nullptr;
	int* denominator = nullptr;

    void show_create_log()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 10);
        cout << "Call Constructor fraction()" << endl;
        SetConsoleTextAttribute(hConsole, 7);
    }

    void show_destroy_log()
    {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, 12);
        cout << "Call Destructor ~fraction()" << endl;
        SetConsoleTextAttribute(hConsole, 7);
    }
public:
	fraction(double number) //default
	{
		int count = 0;
		int temp = number;
		while (temp != 0) {
			temp = temp / 10;
			count++;
		}
		int temp2 = number * pow(10, count);
		this->numerator = new int(temp2);
		this->denominator = new int(pow(10, count));
		reduction_of_fraction();
		show_create_log();
	}

    fraction(int numerator, int denominator) //default 
    {
		if (denominator == 0)
		{
			cout << "Error! Denominator can't be 0" << endl;
			return;
		}
		this->numerator = new int(numerator);
		this->denominator = new int(denominator);
		reduction_of_fraction();
        show_create_log();
    }

    //getters
    int* get_numerator() {
		if (this->numerator != nullptr)
			return this->numerator;
		else
			return new int{ 0 };
    }
    int* get_denominator() {
		if (this->denominator != nullptr)
			return this->denominator;
		else
			return new int{ 1 };
    }


    //setters
	void set_nomenator(int* numerator) {
		if (numerator != nullptr)
		    this->numerator = numerator;
	}
    void set_denominator(int* denominator) {
		if (denominator != nullptr)
			this->denominator = denominator;
    }


    void reduction_of_fraction()
    {
		int a = *numerator;
		int b = *denominator;
		while (a != 0 && b != 0)
		{
			if (a > b)
				a %= b;
			else
				b %= a;
		}
		*numerator /= a + b;
		*denominator /= a + b;
    }

	void show_impoper_fraction() {
		int integer = *numerator / *denominator;
		int numerator = *this->numerator % *denominator;
		cout << integer << " " << numerator << "/" << *denominator << endl;
	}

	void show_decimal_fraction() {
		cout << (double)*numerator / *denominator << endl;
	}

    void show()
    {
		char horizontal_line = 196;
		int temp = *numerator;
		int temp2 = *denominator;
		int count = 0;
		int count2 = 0;
        while (temp != 0) {
			temp = temp / 10;
			count++;
        }
        while (temp2 != 0) {
			temp2 = temp2 / 10;
			count2++;
        }
		int max = count > count2 ? count : count2;
		cout << *numerator << endl;
		for (int i = 0; i < max; i++) cout << horizontal_line;
		cout << endl;
		cout << *denominator << endl;
    }

    ~fraction()
    {
        show_destroy_log();
		if (numerator != nullptr) delete numerator;
		if (denominator != nullptr) delete denominator;
    }
};