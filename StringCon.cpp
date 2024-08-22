#include <iostream>
#include <string>

int main() {
    std::string firstString, secondString, concatenatedString;

    // Loop to take input and concatenate strings 3 times
    for (int i = 1; i <= 3; ++i) {
        std::cout << "Enter first string for input " << i << ": ";
        std::getline(std::cin, firstString); // Taking input for the first string

        std::cout << "Enter second string for input " << i << ": ";
        std::getline(std::cin, secondString); // Taking input for the second string

        // Concatenate the two strings
        concatenatedString = firstString + secondString;

        // Print the concatenated result
        std::cout << "The concatenated string for input " << i << " is: " << concatenatedString << "\n\n";
    }

    return 0;
}