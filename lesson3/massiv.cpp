#include <iostream>

int main () {
    int arr [15];
    int sum1 = 0, sum2 = 0, max = arr[0], min = arr[0], n;
    std::cout << "Enter 10 numbers: " << std::endl;
    for (int i = 0; i <= 9; i++) {
        std::cin >> n;
        arr [i] = n;
        if (arr [i] % 2 == 0) {
            sum1 += arr [i];
        } else {
            sum2 += arr [i];
        }
    }
    std::cout << "The sum of even - " << sum1 << std::endl;
    std::cout << "The sum of odd - " << sum2 << std::endl;
    for (int i = 1; i <= 9; i++) {
        if (max <= arr [i]) {
            max = arr [i];
        }
        if (min >= arr [i]){
            min = arr [i];
        }
    }
    std::cout << "Max - " << max << std::endl;
    std::cout << "Min - " << min << std::endl;
    return 0;
}
