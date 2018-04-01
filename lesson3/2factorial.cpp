#include <iostream>
        int factorial(int n) {
                if (n < 3) {
			return n;
           	} else {
	                return n*factorial(n-2);
                }
	}
	int main() {
                int n;
                std::cout << "Enter the number \n";
                std::cin >> n;
                if (n >= 0) {
                        std::cout << factorial(n) << std::endl;
                } else { 
			std::cout << "Error" << std::endl;
                }
        return 0;
        }

