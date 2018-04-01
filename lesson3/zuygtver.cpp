#include <iostream>
        int a=1;
        int tver(int n) {
                if (a <= n && a % 2 == 0) {
	                std::cout << a << std::endl;
	                a++;
		}
		a++; 
		tver(n);
	}

        main() {
                std::cout << "Enter the number " << std::endl;
                int n;
                std::cin >> n;
                tver(n);
        return 0;
}

