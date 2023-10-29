#include <iostream>
#include <string>

class MyClass {
public:
    std::string str;
    MyClass(std::string&& str) : str(std::move(str)) {
        std::cout << "Move constructor called" << std::endl;
    }
};

int main() {
    std::string myString = "Hello, world!";
    MyClass myObj(std::move(myString));  // Calls the move constructor
    std::cout << "Original string: " << myString << std::endl;  // Likely to be empty
    return 0;
}
