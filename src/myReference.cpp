#include <iostream>

int main() {
    int original = 10; // Original variable
    int& ref = original; // Reference to original

    ref = 20; // Modifying the reference also changes the original

    std::cout << "Original: " << original << std::endl; // Output will be 20
    std::cout << "Reference: " << ref << std::endl; // Output will also be 20
    
    return 0;

}