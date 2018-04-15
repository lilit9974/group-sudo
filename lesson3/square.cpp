#include <iostream>
int main() {
	int size;
	std::cout << "Input size : ";
	std::cin >> size;
	int arr[size][size];
	int a = size * size;
	int b = size;
	for (int i=0; i<size+1; i++) {
		for (int j=0; j<size+1; j++) {
			std::cout << a << " ";
			a--;
			size--;
			if (size == 0) {
				break;
			}
		}
	}
	for (int i=0; i<size+1; i++) {
		for (int j=size; j>size; j--) {
			if (j=size) {
			std::cout << a; 
			a--;
			} else {
			std::cout << " ";
		//	size--;
		//	if (size == 0) {
		//		break;
			}
		}
	}
	
	return 0;

}
