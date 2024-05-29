#include "func_numbers.h"


int binaryToDecimal(int binarynumber) {
	int decimalNumber = 0, i = 0, remainder;
	while (binarynumber != 0) {
		remainder = binarynumber % 10;
		binarynumber /= 10;
		decimalNumber += remainder * pow(2, i);
		i++;
	}
	return decimalNumber;
}