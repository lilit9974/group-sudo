#include <iostream>
#include <cmath>
int main() {
	int size = 13;
    	int arr[size] = {16, 17, 19, 20, 21, 22, 25, 27, 19, 21, 22, 16, 18};
	std::cout << "Input Age : ";
	int n;
    	std::cin >> n;
    	int masiv[size];
    	int a = std::abs(n - arr[0]);
	int b;
    	for(int i=1; i<size; i++) {
        	masiv[i] = std::abs(n - arr[i]);
        	if(a > masiv[i]) {
        	a = masiv[i];
            	b = arr[i];
        	}
    	}
    	if(n >= b) {
        	std::cout <<"Age = "<< n - a <<'\n';
    	} else {
        	std::cout <<"Age = "<< n + a <<'\n';
    	}
    	return 0;
}
