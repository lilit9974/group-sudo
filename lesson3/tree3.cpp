#include <iostream>
int main() {
	int n;
	std::cout << "Enter height ::";
	std::cin >> n;
	for ( int i = 0; i < n; i++ ) {
        	for ( int j = 0 ; j < n- i - 1; j++ ) {
        		std::cout << " ";
		}
		for ( int j = 0; j <= 2*i; j++) {
			std::cout << "*";
	        }
		std::cout << "\n";
	    	}
	return 0;
}
