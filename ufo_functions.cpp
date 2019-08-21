#include <iostream>
#include <vector>
#include <conio.h>


// Define functions

std::string initualize() {
	std::string answer;
	std::cout << "Please enter your desired word: ";
	char letter = 0;
	while (true) { 
		letter = _getch();
		if (letter == 13 && answer.size()!=0) //if user hits enter, returns string typed in
			return answer;
		if (letter == 8) { //allows backspace to work properly
			if (answer.size() > 0) {
				answer.erase(answer.end() - 1);
				std::cout << letter << ' ' << letter;
			}
		}
		if(letter != 0 && letter != 8 && letter != 13){ //if user enters normal letter, makes it lowercase and adds it to final string
			if (letter >= 'A' && letter <= 'Z')
				letter = letter + 32;
			answer += letter;
			std::cout << "*"; //replace letter typed with * to hide it
		}
	}
}


void display_status(std::vector<char> incorrect, std::string answer) {
	std::cout << "Incorrect guesses: "; //used to highlight guesses already created
	for (int i = 0; i < incorrect.size(); i++)
		std::cout << incorrect[i] << " ";
	std::cout << "\n";
	std::cout << "Codeword: "; //used to display which letters the user has guessed correctly
	for (int j = 0; j < answer.size(); j++)
		std::cout << answer[j] << " ";
	std::cout << "\n";
}

void endgame(std::string answer, std::string codeword) {
	if (answer == codeword) {
		std::cout << "\nHooray! You saved the person and earned a medal of honor! \n"; //winning message
	}
	else {
		std::cout << "\nOh no! The UFO just flew away with another person!\n"; //losing message
	}
}

void greet() {
	std::cout << "=============\nUFO: The Game\n=============\nInstructions: save your friend from alien abduction by guessing the letters in the codeword.\n"; //game introduction
}


void display_misses(int misses) { //stores graphics associated to display how many failed attempts

	if (misses == 0 || misses == 1) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /     \\        (  Send help! ) \n";
		std::cout << "             /   0   \\      / `-----------'  \n";
		std::cout << "            /  --|--  \\    /                 \n";
		std::cout << "           /     |     \\                     \n";
		std::cout << "          /     / \\     \\                   \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 2) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /  0  \\        (  Send help! ) \n";
		std::cout << "             / --|-- \\      / `-----------'  \n";
		std::cout << "            /    |    \\    /                 \n";
		std::cout << "           /    / \\    \\                    \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 3) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /--|--\\        (  Send help! ) \n";
		std::cout << "             /   |   \\      / `-----------'  \n";
		std::cout << "            /   / \\   \\    /                \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 3) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /--|--\\        (  Send help! ) \n";
		std::cout << "             /   |   \\      / `-----------'  \n";
		std::cout << "            /   / \\   \\    /                \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 4) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /  |  \\        (  Send help! ) \n";
		std::cout << "             /  / \\  \\      / `-----------' \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 5) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              / / \\ \\        (  Send help! )\n";
		std::cout << "             /       \\      / `-----------'  \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}
	else if (misses == 6) {

		std::cout << "                 .                            \n";
		std::cout << "                 |                            \n";
		std::cout << "              .-\"^\"-.                       \n";
		std::cout << "             /_....._\\                       \n";
		std::cout << "         .-\"`         `\"-.                  \n";
		std::cout << "        (  ooo  ooo  ooo  )                   \n";
		std::cout << "         '-.,_________,.-'    ,-----------.   \n";
		std::cout << "              /     \\        (  Send help! ) \n";
		std::cout << "             /       \\      / `-----------'  \n";
		std::cout << "            /         \\    /                 \n";
		std::cout << "           /           \\                     \n";
		std::cout << "          /             \\                    \n";
		std::cout << "         /               \\                   \n";

	}

}