#include <iostream>
	int main() {
		int a;
		int b;
		int sum = 0;
		std::cout << "Enter first number. ";
		std::cin >> a;
		std::cout << "Enter last number. ";
		std::cin >> b;
		if (a < b) {
			for ( int i=a; i<b; i++) {
				if ( i % 2 == 0) {
					std::cout << i;
					std::cout << " \n";
					sum += i;
				}
		}
			std::cout << "sum = " << sum << std::endl;	
	} else {
		std::cout << "Error \n";
	return 0;
	}
}
	
