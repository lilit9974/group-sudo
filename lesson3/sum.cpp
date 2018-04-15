#include <iostream>
#include <cstdlib>
int main() {
	std::cout << "Input size : ";
	int size;
	std::cin >> size;
	int arr[size];
	for (int i=0; i<size; i++) {
		arr[i] = (rand()%20+1)-10;
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';
	int n=0;
	for (int i=0; i<size; i++) {
		n += arr[i];
		if (n > arr[0]) {
			arr[0] = n;
			continue;
		}
		if (n < 0) {
			n = 0;
		}
	}
	std::cout << "Sum = " << n << std::endl;
	return 0;
}
