#include <iostream>
	int nk(int n, int k) {
		if (k == 1) {
			return n;
		} else {
			k--;
		return n * nk(n,k);
		}
	}

	main() {
	std::cout << "Enter n" << std::endl;
	int n;
	std::cin >> n;
	std::cout << "Enter k" << std::endl;
	int k;
	std::cin >> k;
	if (k >= 1) {
		std::cout << n << "^" << k << "=" <<  nk(n,k) << std::endl;
	} else {
		std::cout << "k must be > 0" << std::endl;
	}
	return 0;
}
