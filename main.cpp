#include "lib.h"

//guess the number game
int main() {
	int startTimer = time(0);
	int number = 0;
	int guess = 0;
	int tries = 0;
	srand(time(0));
	number = rand() % 500 + 1;
	cout << "Guess My Number Game\n\n";
	do {
		cout << "Enter a guess between 1 and 500 : ";
		cin >> guess;
		tries++;
		if (guess == 0) {
			cout << "You have entered 0. Exiting the game. Number was - " << number;
			break;
		}
		else if (guess > number) {
			cout << "Too high! Enter lower number!\n\n";
		}
		else if (guess < number) {
			cout << "Too low! Enter higher number!\n\n";
		}
		else {
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
			cout << "Time taken to guess the number: " << time(0) - startTimer << " seconds\n";
		}
	} while (guess != number);

	return 0;
}