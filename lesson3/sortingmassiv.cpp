#include <iostream>
#include <cstdlib>
int main() {
	int arr[]={2, 5, 5, 18, 20, 25, 26, 29, 30, 46, 47, 52, 78, 81, 83, 86, 91, 92, 96, 99};
	std::cout <<"Input number 1-100 : ";
	int n;
	std::cin >> n;
	for (int i=0; i<20; i++) {
        	std::cout << arr[i] <<"  ";
    	}
    	std::cout <<'\n';
    	int i = 10;
    	while (arr[i] != n) {
        	if (arr[i] == n) {
			std::cout << n << "-" << i+1 <<'\n';
        	} else if(n<arr[i]) {
        		i = i/2;
        	} else if(n>arr[i]) {
            		i = 2*i;
        	}
    	}
    return 0;
}
