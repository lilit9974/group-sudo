#include <iostream>
	int factorial(int n) {	
		if (n == 0) { 
			return 0; 
		}
		if (n == 1) {
			return 1; }
		return n*factorial(n-1);
		}

	int main() {
		int n;
		std::cout << "Enter the number \n";
		std::cin >> n;
		if (n >= 0) {
			std::cout << factorial(n) << std::endl;
		} else { std::cout << "Error" << std::endl;
		}
	return 0;
	}	
