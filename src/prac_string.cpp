#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello, ";  // Create a string
    std::string name;

    std::cout << "What's your name? ";
    getline(std::cin, name);  // Read a line of input into the string

    greeting += name;  // Concatenate strings
    greeting += "!";

    std::cout << greeting << std::endl;

    // Check if the name contains the letter 'a'
    if (name.find('a') != std::string::npos) {
        std::cout << "Your name contains the letter 'a'." << std::endl;
    } else {
        std::cout << "Your name doesn't contain the letter 'a'." << std::endl;
    }

    return 0;
}
