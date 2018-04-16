#include <iostream>
#include <stdlib.h>
int main() {
	std::cout << "Enter the lenght : ";
	int n;
	std::cin >> n;
	int arr[n];
	for (int i=0; i<n; i++) {
		int min = i;
		arr[i] = rand()%100+1;
		std::cout << arr[i] << " ";
	}
	std::cout << '\n';
	int min = 0;
	for (int i=0; i<n; i++) {
		for (int j=i+1; j<n; j++) {
			if (arr[j] <= arr[min]); {
				min = j;
			}
		}
		std::cout << min << " ";
	}
	std::cout <<'\n';
	return 0;
}
