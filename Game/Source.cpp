//Random number guessing game

#include <iostream>
#include <time.h> // imports the time function

using namespace std;

int main() {
	srand(time(NULL)); //initializes the random function with a seed based on the current time
	
	int guess = 100; //player guess initialized out of range of values to enter the loop
	int guessCount = 0; //guess counter
	char cont = 'y'; //starts continue value as true

	do { //overall shell to allow the game to be played multiple times on player input
		int randomNumber = rand() % 10; //generates a random number and bounds it from 0-10 by using the modulo function

		//Start prompt only to be printed once
		cout << "This program generates a number from 0-10" << endl;
		cout << "Make your first guess: " << endl;
		

			while (guess != randomNumber) { //runs the loop until the player guesses correctly

				cin >> guess; // receives guess

				if (guess < randomNumber) {
				cout << "Too low, try again: " << endl; // basic hint and receives new guess input 
				}
				else {
					cout << "Too high, try again: " << endl; // basic hint and new guess input
					}

			++guessCount; // increments guess count each time through the loop
			

		}
		cout << "Correct, the number was " << randomNumber << " and it took you " << guessCount << " attempts to guess it." << endl; // outputs success message and guess count

		cout << "Would you like to continue? y/n?" << endl;
		cin >> cont; // once the game has run once prompts for repeat input

	} while (cont == 'y' || cont == 'Y'); //allows the game to loop if the player inputs the character 'y' and exits otherwise
	

	system("pause");
	return 0;
}