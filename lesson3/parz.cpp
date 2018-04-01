#include <iostream>
        int a=2;
        int tver(int n) {
                if (a <= (n / 2)) {
		if (n % a == 0) {
     	        	return 0;
		} 
		} if (a == (n/2)) {
			return n;
		} else {
			a++;
        	        tver(n);
                }
        }

        main() {
                std::cout << "Enter the number " << std::endl;
                int n;
                std::cin >> n;
		if (n == 1) {
		std::cout << n << "-voch parz, voch baxadryal" << std::endl;
		} if (n == 2 || n == 3) { 
		std::cout << n << "-prime" << std::endl;
                } if (tver(n)) {
			std::cout << n << "-prime" << std::endl;
		} else {
			std::cout << n << "-not prime" << std::endl;
		}
        return 0;
}


