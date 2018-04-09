#include <iostream>
int main() {
	int arr[5][5];
	int n;
	std::cout << "Enter the members (1-20)" << std::endl;
	for (int i=0; i <= 4; i++) {
		for (int j=0; j <= 4; j++) {
			std::cin >> n;
			if ((n >= 1) && (n <= 20)) {
				arr[i][j] = n;
			} else {
				std::cout << "Error" << std::endl;
			}
		}	
	}
	int sumleft1 = 0;
	for (int i=0; i<=3; i++) {
		for (int j=0; j<=3-i; j++) {
			sumleft1 += arr[i][j];
		}
	}
	std::cout << "1 Ankyunagcic verev - " << sumleft1 << std::endl;
	
	int sumright1 = 0;
	for (int i=1; i<=3; i++) {
		for (int j=2; j>=3; j--) {
			sumright1 += arr[i][j];
		}
	}
	std::cout << "1 Ankyunagcic nerqev - " << sumright1 << std::endl;

	int sumright2 = 0;
	for (int i=0; i<=4; i++) {
		for (int j=i+1; j<=4; j++) {
			sumright2 += arr[i][j];
		}
	}
	std::cout << "2 Ankyunagcic verev - " << sumright2 << std::endl;

	int sumleft2 = 0;
	for (int i=4; i>2; i--) {
		for (int j=5-i; j<=i-1; j++) {
			sumleft2 += arr[i][j];
		}
	}
	std::cout << "2 Ankyunagcic nerqev - " << sumleft2 << std::endl;
	
	int sum1 = 0;
	for (int i=0; i<=1; i++) {
		for (int j=1; j<=2-i; j++) {
			sumleft2 += arr[i][j];
		}
	}
	std::cout << "Verevi erankyun - " << sum1 << std::endl;

return 0;
}
