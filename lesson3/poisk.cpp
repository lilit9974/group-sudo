#include <iostream>
#include <stdlib.h>
int main() {
	int n;
	std::cout << "Enter the lenght : ";
	std::cin >> n;
	int arr[n];
	if ((n>=20) && (n<=50)) {
		for (int i=0; i<n; i++) { 
			arr[i] = rand()%100+1;
			std::cout << arr[i] << " ";
		}
	} else {
		std::cout << "Enter the lenght between 20-50 " << std::endl;
	}
	std::cout << '\n';
	int a;
	std::cout << "Enter the number : ";
	std::cin >> a;
	for (int i=0; i<n; i++) {
		if (a == arr[i]) {
			std::cout << i+1 << std::endl;
		}
	}
	return 0;
}	
