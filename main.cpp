#include "lib.h"

void myStrLower(char* str) {
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
}

bool isCharacterAnEndOfWord(char c) {
	if (c == ' ' || c == '\0' || c == ',' || c == '.' || c == ':' || c == ';' || c == '!' || c == '(' || c == ')' || c == '+' || c == '?' || !c) {
		return true;
	}
	else {
		return false;
	}
}

void reverseText(char* text) {
	int length = strlen(text);
	for (int i = 0; i < length / 2; i++) {
		char temp = text[i];
		text[i] = text[length - i - 1];
		text[length - i - 1] = temp;
	}
}


int findSentanceEndFromEnd(char* text, int start) {
	for (int i = start; i >= 0; i--) {
		if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
			return i;
		}
	}
	return -1;
}



int getNumberOfWordInText(char* word, char* text) {
	int count = 0;

	for (int i = 0; i < strlen(text); i++) {
		if (text[i] == word[0]) {
			bool isWord = true;
			for (int j = 1; j < strlen(word); j++) {
				if (text[i + j] != word[j]) {
					isWord = false;
					break;
				}
			}
			if ((i != 0 && !isCharacterAnEndOfWord(text[i - 1])) || !isCharacterAnEndOfWord(text[i + strlen(word)])) {
				isWord = false;
			}
			if (isWord) {
				count++;
			}
		}
	}
	return count;
}

int getAmountOfSentences(char* text) {
	int count = 0;
	for (int i = 0; i < strlen(text); i++) {
		while (text[i] == '.' || text[i] == '!' || text[i] == '?') {
			i++;
		}
		if (text[i - 1] == '.') {
			count++;
		}
		if (text[i - 1] == '!') {
			count++;
		}
		if (text[i - 1] == '?') {
			count++;
		}
	}
	return count;
}

void reverseSentances(char* text) {
	int length = strlen(text);
	int amountOfSentences = getAmountOfSentences(text);
	int start = length - 1;
	for (int i = 0; i < amountOfSentences; i++) {
		int end = findSentanceEndFromEnd(text, start);
		for (int j = end; j <= start; j++) {
			cout << text[j];
		}
		cout << " ";
		start = end - 1;
	}
}

int getAmountOfCommasAndDots(char* text) {
	int count = 0;
	for (int i = 0; i < strlen(text); i++) {
		if (text[i] == '.' || text[i] == ',') {
			count++;
		}
	}
	return count;
}


int main() {
	char text[250];
	char word[100];
	char lowerText[250];
	char copyText[250];
	char lowerWord[100];
	cout << "Enter text: ";
	cin.getline(text, 100);
	strcpy_s(lowerText, text);
	strcpy_s(copyText, text);
	myStrLower(lowerText);
	cout << "Enter word: ";
	cin.getline(word, 100);
	strcpy_s(lowerWord, word);
	myStrLower(lowerWord);
	cout << "Number of word in text: " << getNumberOfWordInText(lowerWord, lowerText) << endl;
	cout << "Amount of sentences: " << getAmountOfSentences(lowerText) << endl;
	cout << "Amount of commas and dots: " << getAmountOfCommasAndDots(lowerText) << endl;
	reverseText(copyText);
	cout << "Reversed text: " << copyText << endl;
	cout << "Reversed sentances: ";
	reverseSentances(text);



	return 0;
}
