#include "lib.h"


int main() {
	//ϳ��������� ������� ����� ����� � ������� �� 100 �� 999, � ���� �� ����� ���.
	int count = 0;
	for (int i = 100; i < 1000; i++) {
		int a = i / 100;
		int b = (i / 10) % 10;
		int c = i % 10;
		if (a != b && a != c && b != c) {
			count++;
		}
	}
	cout << "Count: " << count << endl;
}