#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
        void firstfoo(int b) {
                std::cout << "Nobody won" << std::endl;
        }

        void secondfoo(int b) {
                std::cout << "First player won" << std::endl;
        }

        void thirdfoo(int b) {
                std::cout << "Second player won" << std::endl;
        }

        int main() {
                std::cout << "Game chinga-chung " << std::endl;
                std::cout << "Start " << std::endl;
                std::cout << "Note: 1-Stone, 2-List, 3-Scissors " << std::endl;
                int b;
		srand((unsigned)time(0)); 
		int a;
		a = (rand()%3)+1; 
		std::cout << a << "\n";
                std::cout << "Player2: Please type 1,2 or 3. " << std::endl;
                std::cin >> b;
                if ((a == 1 && b == 1) || (a == 2 && b == 2) || (a == 3 && b == 3)) {
                        firstfoo(b);
                } else if ((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2)) {
                        secondfoo(b);
                } else if ((a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1)) {
                        thirdfoo(b);
                } else {
                        std::cout << "You don't know the rules of game. " << std::endl;
                };
        return 0;
        }
           
