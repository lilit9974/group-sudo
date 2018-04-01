#include <iostream>
	int a=1;
	int tver(int n) {
		if (a <= n) {
		std::cout << a << std::endl;
		a++;
		tver(n);
		}
	}

	main() {
		std::cout << "Enter the number " << std::endl;
		int n;
		std::cin >> n;
		tver(n);
	return 0;
}

