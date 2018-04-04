#include <iostream>
int main() {
    int n;
    std::cout << "Enter height :: ";
    std::cin >> n;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0 ; j < n; j++ ) {
            
            if ( j <= i ) {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
    return 0;
}
