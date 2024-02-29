#include <iostream>
#include <type_traits>

// Function taking an int by value

void displayType(int) {
    std::cout << "Argument type: int" << std::endl;
}

// Function taking a pointer to int

void displayType(int* ptr){
    if (ptr == nullptr){
        std::cout << "Argument type: nullptr (int*)" << std::endl;
    }
    else {
        std::cout << "Argument type: pointer to int" << std::endl;
    }
}

int main() {
    //Call the function with NULL
    displayType(NULL);
    displayType(nullptr);
    return 0;
}