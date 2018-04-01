#include <iostream>
	int mirror(int a) {
		if ((a / 10) == 0) {
			std::cout << a << std::endl;
		} else {
			std::cout << (a % 10);
		return mirror(a / 10);
		} 
	}
	int main() {
		std::cout << "Enter the number \n";
		int a;
		std::cin >> a;
		mirror(a);
	}
