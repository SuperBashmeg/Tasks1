#include "struct.h"

fraction Addition(fraction fr1, fraction fr2)
{
	int numerator = *fr1.get_numerator() * *fr2.get_denominator() + *fr2.get_numerator() * *fr1.get_denominator();
	int denominator = *fr1.get_denominator() * *fr2.get_denominator();
	return fraction(numerator, denominator);
}

fraction Subtraction(fraction fr1, fraction fr2)
{
	int numerator = *fr1.get_numerator() * *fr2.get_denominator() - *fr2.get_numerator() * *fr1.get_denominator();
	int denominator = *fr1.get_denominator() * *fr2.get_denominator();
	return fraction(numerator, denominator);
}

fraction Multiplication(fraction fr1, fraction fr2)
{
	int numerator = *fr1.get_numerator() * *fr2.get_numerator();
	int denominator = *fr1.get_denominator() * *fr2.get_denominator();
	return fraction(numerator, denominator);
}

fraction Division(fraction fr1, fraction fr2)
{
	int numerator = *fr1.get_numerator() * *fr2.get_denominator();
	int denominator = *fr1.get_denominator() * *fr2.get_numerator();
	return fraction(numerator, denominator);
}

int main()
{
	fraction* fr1 = new fraction(1.5);
	fraction* fr2 = new fraction(2, 3);
	fr1->show();
	fr2->show();
	//Select what you want to do with fractions
	fraction* add = nullptr;
	fraction* sub = nullptr;
	fraction* mul = nullptr;
	fraction* div = nullptr;
	int choice;
	cout << "Select what you want to do with fractions: 1 - Addition, 2 - Subtraction, 3 - Multiplication, 4 - Division" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		add = new fraction(Addition(*fr1, *fr2));
		add->show();
		break;
	}
	case 2:
	{
		sub = new fraction(Subtraction(*fr1, *fr2));
		sub->show();
		break;
	}
	case 3:
	{
		mul = new fraction(Multiplication(*fr1, *fr2));
		mul->show();
		break;
	}
	case 4:
	{
		div = new fraction(Division(*fr1, *fr2));
		div->show();
		break;
	}
	}
	
	if (add != nullptr) delete add;
	if (sub != nullptr) delete sub;
	if (mul != nullptr) delete mul;
	if (div != nullptr) delete div;
	return 0;
}