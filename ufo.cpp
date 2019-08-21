#include <iostream>
#include "ufo_functions.h"

int main() {
	greet();
	std::string codeword = initualize(); //recieves input from user
	std::string answer (codeword.size(),'_'); //creates answer to showcase what has been answered
	int misses = 0;
	std::vector<char> incorrect; //vector to showcase which answers hve already been typed
	bool guess = false; //depicts if answer is right or not
	char letter;
	while (answer != codeword && misses < 7) { //while game is being played
		display_misses(misses);
		display_status(incorrect, answer);
		std::cout << "Please enter your guess: ";
		std::cin >> letter;
		for (int index = 0; index < codeword.size(); index++) { //checks if leter guessed is in the code
			if (letter == codeword[index]) {
				answer[index] = letter;
				guess = true;
			}
		}
		if (guess)
			std::cout << "Correct!\n"; //if guessed char is in code
		else {
			std::cout << "Incorrect! The tractor beam pulls the person in further.\n"; //if guessed char isnt in codeword, add to misses
			incorrect.push_back(letter);
			misses++;
		}
		std::cout << "\n\n\n"; //to make the terminal look nicer
		guess = false; //reset guess to false if it was changed to true
	}
	endgame(answer, codeword); //call function to check endgame results 



}
