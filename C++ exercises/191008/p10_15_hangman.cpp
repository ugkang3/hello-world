//// exercise 10.15 hangman - °­À¯°æ 
//#include <iostream>
//#include <string>
//#include <cstdlib>
//#include <ctime>
//#include <iomanip>
//
//int main()
//{
//	// Words
//	std::string words[] = { "write", "that", "read", "coffee" };
//	char letter;
//
//	while (1) {
//		std::string answer;
//		std::string asterisks;
//		int miss = 0;
//		// Create a random word
//		// 1. create random idx
//		srand(time(NULL));
//		int rndWordIdx = rand() % words->length();
//		
//		// 2. choose a word from words[] by randomly created idx
//		answer.assign(words[rndWordIdx]);
//		asterisks.assign(answer.length(), '*');
//
//		while (asterisks != answer) {
//			// Guess the word
//			// 1. Enter a letter
//			std::cout << "(Guess) Enter a letter in word " << asterisks << " > ";
//			std::cin >> letter;
//
//			// 2. If a letter is in the word, show the letter. - string; find
//			if (answer.find(letter) != std::string::npos) {
//				if (asterisks.find(letter) == std::string::npos) {
//					for (int i = 0; i < answer.length(); i++) {
//						if (letter == answer[i]) {
//							asterisks[i] = letter;
//						}
//					}
//				}
//				else {
//					std::cout << std::setw(6) << letter << " is already in the word\n";
//				}
//			}
//			else {
//				std::cout << std::setw(6) << letter << " is not in the word\n";
//				miss++;
//			}
//		}
//		// 3. When player finished guessing, print the number of miss & ask try another word
//		std::cout << "The word is " << answer << ". You missed " << miss << " time\n\n";
//		std::cout << "Do you want to guess for another word? Enter y or n> ";
//		std::cin >> letter;
//		if (letter == 'n') break;
//	}
//
//	return 0;
//}