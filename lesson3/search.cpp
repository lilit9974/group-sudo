#include <iostream>
int main() {
	int arr[] = {1, 2, 15, 21, 25, 26, 28, 35, 39, 49, 51, 54, 67, 69, 73, 79, 81, 88, 91, 99};
    	std::cout << "Enter number : ";
    	int n;
    	std::cin >> n;
    	for (int i = 0; i < 20; i++) {
        	std::cout << arr[i] << " ";
    	}
	std::cout << '\n';
    	for (int i = 0; i < 20; i++) {
        	if (n == arr[i]) {
            	std::cout << n <<" -  " << i + 1  << std::endl;
            	break;
        	} else if (n != arr[i] && i == 19) {
            	std::cout << n << "is not in this list of numbers." << std::endl;
        	}
    	}
    	return 0;
}
