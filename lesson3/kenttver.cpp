#include <iostream>
        int a=1;
        int tver(int n) {
		if (a <= n && a % 2 == 0) {
			a++;
        	        std::cout << a << std::endl;
                }
		a++;
                tver(n);
        }

        main() {
                std::cout << "Enter the number " << std::endl;
                int n;
                std::cin >> n;
		std::cout << a << std::endl;
                tver(n);
        return 0;
}


