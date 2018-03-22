#include <iostream>
#include <string>
	void firstfoo(int a, int b) {
		std::cout << "Nobody won" << std::endl;
	}

	void secondfoo(int a, int b) {
		std::cout << "First player won" << std::endl;
	}

	void thirdfoo(int a, int b) {
		std::cout << "Second player won" << std::endl;
	}

	int main() {
		std::cout << "Game chinga-chung " << std::endl;
		std::cout << "Start " << std::endl;
		std::cout << "Note: 1-Stone, 2-List, 3-Scissors " << std::endl;
		int a;
		int b;
		std::cout << "Player1: Please type 1,2 or 3. " << std::endl;
		std::cin >> a;
		std::cout << "Player2: Please type 1,2 or 3. " << std::endl;
		std::cin >> b;
		if ((a == 1 && b == 1) || (a == 2 && b == 2) || (a == 3 && b == 3)) {
			firstfoo(a,b);
		} else if ((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2)) {
			secondfoo(a,b);
		} else if ((a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1)) {
			thirdfoo(a,b);
		} else {
			std::cout << "You don't know the rules of game. " << std::endl; 
		}; 
	return 0;
	} 
