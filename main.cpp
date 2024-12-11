#include <iostream>
#include <string>

int main() {
    std::string str = "abcdefghijklmnopqrstuvwxyz";
    size_t lines = 13; // Number of lines in the output

    // Loop to generate each line of the pyramid
    for (size_t i = 0; i < lines; ++i) {
        // Add spaces for center alignment
        for (size_t k = 0; k < lines - i - 1; ++k) {
            std::cout << ' ';
        }

        // Print the first half in reverse order
        for (int j = i; j >= 0; --j) {
            std::cout << str[j];
        }

        // Print the second half in forward order
        for (size_t j = 1; j <= i; ++j) {
            std::cout << str[j];
        }

        std::cout << std::endl; // Move to the next line
    }

    return 0;
}