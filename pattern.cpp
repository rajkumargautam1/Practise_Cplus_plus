#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    // Upper part of the pattern
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= (n - i) * 2; j++) {
            std::cout << " ";
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            std::cout << j << " ";
        }

        // Print increasing numbers
        for (int j = 2; j <= i; j++) {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= (n - i) * 2; j++) {
            std::cout << " ";
        }

        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            std::cout << j << " ";
        }

        // Print increasing numbers
        for (int j = 2; j <= i; j++) {
            std::cout << j << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
